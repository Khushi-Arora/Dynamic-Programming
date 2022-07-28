#include<bits/stdc++.h>
int minenrgy(int ind,int size,vector<int>&heights)
{
    int prev1=0,ans,prev2;
    for(ind=1;ind<=size;ind++)
    {
       int right=INT_MAX;
       int left=prev1+ abs(heights[ind]-heights[ind-1]);
        if(ind>1)
     right=prev2+ abs(heights[ind]-heights[ind-2]);
       ans=min(left,right);
        prev2=prev1;
        prev1=ans;
    }
   return ans;
}

int frogJump(int n, vector<int> &heights)
{
    //vector<int>dp(n,-1);
    return minenrgy(0,n-1,heights);
    // Write your code here.
    
}
