#include<bits/stdc++.h>
int minenrgy(int ind,int size,vector<int>&heights,vector<int>&dp)
{
    dp[0]=0;
    for(ind=1;ind<=size;ind++)
    {
       int right=INT_MAX;
       int left=dp[ind-1]+ abs(heights[ind]-heights[ind-1]);
        if(ind>1)
     right=dp[ind-2]+ abs(heights[ind]-heights[ind-2]);
       dp[ind]=min(left,right);
    }
   return dp[size];
}

int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n,-1);
    return minenrgy(0,n-1,heights,dp);
    
}
