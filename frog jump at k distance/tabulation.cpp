#include <bits/stdc++.h>
using namespace std;

int solve(int ind,int k,vector<int>arr,vector<int>&dp)
{
    dp[0]=0;
   
    for(int i=1;i<=ind;i++)
    {
         int minstep=INT_MAX;
    for(int j=1;j<=k;j++)
    {
        int jump=INT_MAX;
        if(i>=j)
         jump=dp[i-j]+abs(arr[i]-arr[i-j]);
        minstep=min(minstep,jump);
    }
    dp[i]=minstep;
    }
    return  dp[ind];
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
