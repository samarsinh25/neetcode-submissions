class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=heights.size();
        int i=0,j=l-1;
        int result=0;
        while(i<j)
        {
            int temp_cap;
            if(heights[i]<=heights[j])temp_cap=(j-i)*heights[i];
            else temp_cap=(j-i)*heights[j];
            if(temp_cap>result) result=temp_cap;
            if(heights[i]<=heights[j])i++;
            else j--;
        }
        return result;
    }
};
