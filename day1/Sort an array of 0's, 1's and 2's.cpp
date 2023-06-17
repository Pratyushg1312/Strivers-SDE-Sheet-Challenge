class Solution {
public:
int divide(vector<int>& nums,int s,int e)
{
    int p=nums[e];
    int ind=s;
    for(int i=s;i<e;i++)
    {
        if(nums[i]<p)
        {
            int t=nums[i];
            nums[i]=nums[ind];
            nums[ind]=t;
            ind++;
        }
    }
    int t=nums[e];
            nums[e]=nums[ind];
            nums[ind]=t;
            return ind;
}
    void qsort(vector<int>& nums,int s,int e)
    {
        if(s<e)
        {
        int d=divide(nums,s,e);
            qsort(nums,s,d-1);
            qsort(nums,d+1,e);
        }
    }
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        qsort(nums,0,nums.size()-1);
    }
};