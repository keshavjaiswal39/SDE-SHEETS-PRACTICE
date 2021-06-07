class Solution {
public:
    
    int maximum(vector<int> & nums)
    {
        int max_ans = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max_ans)
            {
                max_ans = nums[i];
            }
        }
        return max_ans;
    }
    
    int maxSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        
        int cs = 0;
        int ms = 0;
        
        for(int i=0;i<n;i++)
        {
            cs += nums[i];
            
            if(cs<0)
            {
                cs=0;
            }
            
            ms = max(ms, cs);
        }
        if(ms == 0)
            return maximum(nums);
        else
            return ms;
    }
};
