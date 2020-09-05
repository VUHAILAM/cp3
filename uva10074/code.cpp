#include "bits/stdc++.h"
using namespace std;

void solve(int n, int m) {
    vector< vector<int> > a(n+1, vector<int>(m+1));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    vector< vector<int> > dp(n+1, vector<int>(m+1));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i][j] = dp[i][j-1] +dp[i-1][j] - dp[i-1][j-1] + a[i][j];
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            for(int x = i; x <= n; x++) {
                for(int y = j; y <= m; y++) {
                    int d = x-i+1;
                    int r = y-j+1;
                    int dt = d*r;
                    int res = dp[x][y]+dp[i-1][j-1]-dp[i-1][y]-dp[x][j-1];
                    if(res == 0) {
                        //cout << i << " " << j << endl;
                        //cout << x << " " << y << endl;
                        //cout << endl;
                        ans = max(ans, dt);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    //cout << dp[5][3] +dp[3][1] -dp[3][2] - dp[4][1] <<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    while (n != 0 || m != 0)
    {
        /* code */
        solve(n, m);
        cin >> n >> m;
    }
    
    return 0;
}