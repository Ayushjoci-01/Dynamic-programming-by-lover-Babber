#include<iostream>
using namespace std;
int staires(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int badi=staires(n-1);
    int choti=staires(n-2);
    return badi+choti;
}
int main()
{
    int n;
    cout<<"enter the number range";
    cin>>n;
    int l=staires(n);
    cout<<"min no of stairs is"<<l;

}