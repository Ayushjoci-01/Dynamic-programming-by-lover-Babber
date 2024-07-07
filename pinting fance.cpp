#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& dp, int n, int k) {
    if (n == 0) {
        return k;
    }
    if (n == 2) {
        return k + k * (k - 1);
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    dp[n] = solve(dp, n - 2, k) * (k - 1) + solve(dp, n - 1, k) * (k - 1);
    return dp[n];
}

int numofWays(int n, int k) {
    vector<int> dp(n + 1, -1);
    int ans = solve(dp, n, k);
    return ans;
}

int main() {
    int n, k;
    cout << "Enter the number of walls: ";
    cin >> n;
    cout << "Enter the number of colors: ";
    cin >> k;
    int bi = numofWays(n, k);
    cout << "Number of ways to paint the walls: " << bi << endl;
    return 0;
}
