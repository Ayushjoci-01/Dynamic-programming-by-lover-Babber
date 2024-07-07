#include<bits/stdc++.h>
using namespace std;

int solve(int index, vector<int>& w, vector<int>& v, int maxweight) {
    if (index == 0) {
        if (w[0] <= maxweight) {
            return v[0];
        } else {
            return 0;
        }
    }
    
    int include = 0;
    if (w[index] <= maxweight) {
        include = v[index] + solve(index - 1, w, v, maxweight - w[index]);
    }
    int exclude = solve(index - 1, w, v, maxweight);
    return max(include, exclude);
}

int findmaximum(int n, vector<int>& w, vector<int>& v, int maxweight) {
    int ans = solve(n - 1, w, v, maxweight);
    return ans;
}

int main() {
    int maxweight, n;
    cout << "Enter the total number of items: ";
    cin >> n;
    
    cout << "Enter the maximum weight of the bag: ";
    cin >> maxweight;
    
    vector<int> w(n), v(n);
    cout << "Enter the weight of each item: ";
    for(int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    cout << "Enter the value of each item: ";
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int total = findmaximum(n, w, v, maxweight);
    cout << "Maximum cost is: " << total << endl;
    return 0;
}
