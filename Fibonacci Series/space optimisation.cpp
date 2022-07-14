class Solution {
public:
    int fib(int n) {
        if(n<=1)return n;
     int prev=0,prev2=1,ans;
        for(int i=2;i<=n;i++)
        {
            ans=prev+prev2;
            prev=prev2;
            prev2=ans;
        }
        return ans;
    }
};
