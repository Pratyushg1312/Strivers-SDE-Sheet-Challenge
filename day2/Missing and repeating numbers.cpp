#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
	
     vector<int>mp(n+1,0);
       for(auto i:nums)
       {
           mp[i]++;
       }
	  

pair<int,int>a;
       for(int i=1;i<n+1;i++)
       {
		   if(mp[i]<1) a.first=i;
           if(mp[i]>1)
           {
           a.second= i;
               
           }


         
       }
	   
    return a;
	
}
