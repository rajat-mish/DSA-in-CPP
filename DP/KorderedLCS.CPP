#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[2005][2005][8];

ll fun(int *a, int *b, int n, int m, int i, int j, int k) {
    if (i == n || j == m) return 0;
    if (dp[i][j][k] != -1) return dp[i][j][k];
    
    ll res = 0;
    if (a[i] == b[j]) {
        res = 1 + fun(a, b, n, m, i + 1, j + 1, k);
    } else {
        if (k > 0) {
            res = 1 + fun(a, b, n, m, i + 1, j + 1, k - 1);
        }
        res = max(res, fun(a, b, n, m, i + 1, j, k));
        res = max(res, fun(a, b, n, m, i, j + 1, k));
    }
    dp[i][j][k] = res;
    return res;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    // Initialize dp array with -1
    memset(dp, -1, sizeof(dp));
    
    cout << fun(a, b, n, m, 0, 0, k) << endl;
    return 0;
}
