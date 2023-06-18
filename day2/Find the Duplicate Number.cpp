class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
     vector<int>mp(n,0);
       for(auto i:nums)
       {
           mp[i]++;
       }
int ans=0;
       for(int i=0;i<n;i++)
       {
           if(mp[i]>1)
           {
           ans= i;
               break;
           }


         
       }
    return ans;
    }
};
