class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(int x:nums)
        {
            m[x]++;
        }

        vector<pair<int, int>> v(m.begin(), m.end());

        sort(v.begin(), v.end(),[](const auto& a, const auto& b) {
         return a.second > b.second;
     });
        vector<int>vec;
        for (auto& [key, value] : v) {
            if(k>0){vec.push_back(key);}
            k--;
}
return vec;
    }
};
