class Solution {
   
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
      
        int sum=0,maxsum=nums[0];
        for(auto i:nums)
            {
                sum+=i;
                maxsum=(max(maxsum,sum));
                if(sum<0) sum=0;
            }
        
      return maxsum;
    }
};