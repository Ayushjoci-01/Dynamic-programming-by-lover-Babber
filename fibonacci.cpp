//using recursion //
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int badi=fibonacci(n-2);
    int choti=fibonacci(n-1);
    return badi+choti;
}
int main()
{
    int n;
    cin>>n;
    int l=fibonacci(n);
    cout<<"fibonacci number is"<<l;
}