#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c, int d) {
    int ans = 1080 + ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40)*9;
    cout << ans <<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int a, b, c, d;
    for(;;) {
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c==0 &&d==0)
            break;
        solve(a,b,c,d);
    }

    return 0;
}