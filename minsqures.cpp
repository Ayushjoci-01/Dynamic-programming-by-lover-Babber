#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==0)
    {
        return 0;
    }
    int sol=n;
    for(int i=1;i*i<=n;i++)
    {
        int temp=i*i;
        sol=min(sol,1+solve(n-temp));
    }
    return sol;
}
int solve2(int n)
{
    vector<int>dp(n+1,INT_MAX);
    dp[0]=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j*j<=n;j++)
        {
        int temp=j*j;
        if(i-temp>=0)
        {
        dp[i]=min(dp[i],1+dp[i-temp]);
        }
        }
    }
    return dp[n];
}
int minsqure(int n)
{
    int ans=solve2(n);
    return ans;
}
int main()
{
    int n;
    cout<<"enter the number to the maximum no ";
    cin>>n;
    int li=minsqure(n);
    cout<<"min no of squre is"<<li;
}