//tabulaton mathod//
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int fibo(int n,vector<int>&dp)
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    }
    return dp[n];
}
int main()
{
    int n;
    cout<<"enter the no range";
    cin>>n;
     vector<int>dp(n+1,-1);
    for(int i=0;i<n;i++)
    {
        if(dp[i]!=-1)
        {
            return dp[i];
        }
    }
    int li=fibo(n,dp);
    cout<<"fibonacci no is"<<li;

}