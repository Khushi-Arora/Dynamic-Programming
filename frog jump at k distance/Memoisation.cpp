#include <bits/stdc++.h>
using namespace std;

int solve(int ind,int k,vector<int>arr,vector<int>&dp)
{
    if(ind==0)return 0;
    int minstep=INT_MAX;
    if(dp[ind]!=-1)return dp[ind];
    for(int j=1;j<=k;j++)
    {
        int jump=INT_MAX;
        if(ind>=j)
         jump=solve(ind-j,k,arr,dp)+abs(arr[ind]-arr[ind-j]);
        minstep=min(minstep,jump);
    }
    return  dp[ind]=minstep;
}

int main()
{
    int n;
    int k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>dp(n,-1);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<solve(n-1,k,arr,dp);
    return 0;
}
