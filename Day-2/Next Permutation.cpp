class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i=nums.size()-2;
        int j=nums.size()-1;
        
        if(i<0)
        {
            return;
        }
        
        while(nums[i]>=nums[i+1] and i>=0)
        {   
            i--;
            
            if(i<0)
            {
                break;
            }
            
        }
        
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
        }
        
        else
        {
            while(nums[j]<=nums[i])
            {
                j--;
            }

            swap(nums[i],nums[j]);

            reverse(nums.begin()+i+1,nums.end());
        }        
    }
};
