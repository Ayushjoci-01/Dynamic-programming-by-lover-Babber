//top-down approch//
//recursion+mamorization//
#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>&dp)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }
    dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
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