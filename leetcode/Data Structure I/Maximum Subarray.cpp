class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int max_end = 0;
        int max_far = INT_MIN;
        
        for(auto it : nums)
        {
            max_end+=it;
            if(max_far<max_end)max_far = max_end;
            if(max_end<0)max_end = 0;
        }
        return max_far;
    }
};