#include <bits/stdc++.h>
using namespace std;

int minenrgy(int ind,vector<int>&height,vector<int>&dp)
{
    if(ind==0)return 0;
    
    if(dp[ind]!=-1)return dp[ind];
   
    int right=INT_MAX;
    int left=minenrgy(ind-1,height,dp)+ abs(height[ind]-height[ind-1]);
   
    if(ind>1)
    right=minenrgy(ind-2,height,dp)+ abs(height[ind]-height[ind-2]);
   
    
      return dp[ind]=min(left,right);
}

int main()
{
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }
vector<int>dp(n,-1);
minenrgy(n-1,height,dp);
cout<<dp[0];
    return 0;
}
