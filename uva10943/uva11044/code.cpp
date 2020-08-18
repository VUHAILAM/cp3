#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int k) {
    vector< vector<ll> > dp(n+100, vector<ll>(k+100, 0ll));
    for(int i = 0; i <= n; i++) {
        dp[i][1] = 1ll;
    }
    for(int j = 1; j < k; j++) {
        for(int i = 0; i <= n; i++) {
            for(int z = 0; z <= n-i; z++) {
                dp[i+z][j+1] += dp[i][j];
                dp[i+z][j+1] %= 1000000; 
            }
        }
    }
    cout << dp[n][k]%1 <<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, k;
    cin >> n >> k;
    while (n != 0 && k != 0)
    {
        /* code */
        solve(n, k);
        cin >> n >> k;
    }
    

    return 0;
}