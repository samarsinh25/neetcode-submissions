class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>alphas;
            for(char x: s)
            {
                alphas[x]++;
            }
            for(char x: t)
            {
                if(alphas[x]==0)return false;
                else{alphas[x]--;}
            }
            for (auto& [key, value] : alphas) {
                    if (value!=0) return false;
            }
            return true;
    }
};
