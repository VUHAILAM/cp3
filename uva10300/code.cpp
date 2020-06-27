#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int a, b, c;
    int sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        sum += a*c;
    }
    cout << sum <<endl;
}

int main()
{
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