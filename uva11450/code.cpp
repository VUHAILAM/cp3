#include "bits/stdc++.h"
using namespace std;

void solve() {
    int m, c;
    cin >> m >> c;
    vector< vector<int> > a(c);
    for(int i = 0; i < c; i++) {
        int k;
        cin >> k;
        a[i] = vector<int>(k);
        for(int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    vector< vector<int> > dp(c+1, vector<int>(m+1, 0));
    for(int i = 0; i < a[0].size(); i++) {
        if(m-a[0][i] >= 0) {
            dp[0][m-a[0][i]] = true;
        }
    }
    for(int i = 1; i < c; i++) {
        for(int j = 0; j <= m; j++) {
            if(dp[i-1][j]) {
                for(int k = 0; k < a[i].size(); k++) {
                    if(j-a[i][k] >= 0) {
                        dp[i][j-a[i][k]] = true;
                    }
                }
            }
        }
    }
    int du = 0;
    for(; du <= m && !dp[c-1][du]; du++);
    if (du > m) {
        cout << "no solution" <<endl;
    } else {
        cout << m-du <<endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}