class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int l=nums.size();
        map<int, int>m;
        for (int i=0;i<l;i++){
            if (m[nums[i]]==1) return true;
            else m[nums[i]]++;
        }
        return false;
    }
};