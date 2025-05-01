#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int k;
int h[N];
int dp[N];

int solve(int i) {
    if (i == 0) return 0;
    if (dp[i] != -1) return dp[i];
    int cost=INT_MAX;
    for(int j=1; j<=k; j++){
    if(i-j>=0)
    cost = min(cost, solve(i - j) + abs(h[i] - h[i - j]));

    }
    return dp[i] = cost;
}

int main() {
    int n = 8;
    k=2;
    int input[8] = {32, 43, 1, 2, 3, 4, 27, 36};

    for (int i = 0; i < n; i++) {
        h[i] = input[i];
    } 
    

    memset(dp, -1, sizeof(dp));
    cout << solve(n - 1) << endl;

    return 0;
}