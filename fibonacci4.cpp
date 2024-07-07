#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    int priv1 = 0;
    int priv2 = 1;
    for (int i = 2; i <= n; i++)
    {
        int current = priv1 + priv2;
        priv1 = priv2;
        priv2 = current;
    }
    return priv1;
}

int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;
    int li = fibo(n);
    cout << li;
    return 0;
}
