class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bitset<9> flags;

        
        for (int i = 0; i < 9; i++) {
            flags.reset();
            for (char x : board[i]) {
                if (x != '.') {
                    if (flags.test(x - '1')) return false;
                    flags.set(x - '1');
                }
            }
        }

        
        for (int i = 0; i < 9; i++) {
            flags.reset();
            for (int j = 0; j < 9; j++) {
                char x = board[j][i];
                if (x != '.') {
                    if (flags.test(x - '1')) return false;
                    flags.set(x - '1');
                }
            }
        }

        
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                flags.reset();
                for (int r = 0; r < 3; r++) {
                    for (int c = 0; c < 3; c++) {
                        char x = board[i + r][j + c];
                        if (x != '.') {
                            if (flags.test(x - '1')) return false;
                            flags.set(x - '1');
                        }
                    }
                }
            }
        }

        return true;
    }
};