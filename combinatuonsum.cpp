#include<bits/stdc++.h>
using namespace std;

int solve(int target, vector<int>& candidates) {
    // Base case
    if(target == 0) {
        return 1;
    }
    if(target < 0) {
        return 0;
    }
    
    int sum = 0;
    for(int i = 0; i < candidates.size(); i++) {
        sum += solve(target - candidates[i], candidates);
    }
    return sum;
}
int solve2(int target, vector<int>& candidates,vector<int>&dp) {
    // Base case
    if(target == 0) {
        return 1;
    }
    if(target < 0) {
        return 0;
    }
    if(dp[target]!=-1)
    {
        return dp[target];
    }
    int sum = 0;
    for(int i = 0; i < candidates.size(); i++) {
        sum += solve2(target - candidates[i], candidates,dp);
    }
    return sum;
}
int findWays(int target, vector<int>& candidates) {
  
    vector<int>dp(target+1,-1);
      return solve2(target, candidates,dp);


}

int main() {
    int n, target;
    cout << "Enter the size of n: ";
    cin >> n;

    vector<int> candidates;
    cout << "Enter the candidates: ";
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        candidates.push_back(num);
    }

    cout << "Enter the target: ";
    cin >> target;

    int totalWays = findWays(target, candidates);
    cout << "Total number of ways to find the sum: " << totalWays << endl;

    return 0;
}
