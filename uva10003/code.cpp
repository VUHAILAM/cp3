#include "bits/stdc++.h"
using namespace std;

int cut(int left, int right, vector<int> a, vector< vector<int> > &m) {
    if(left+1 == right) {
        return 0;
    }
    int res = m[left][right];
    if(res != -1)
        return res;
    res = INT_MAX;
    for(int i = left+1; i < right; i++) {
        res = min(res, cut(left, i, a, m)+ cut(i, right, a, m) + a[right]-a[left]);
    }
    m[left][right] = res;
    return res;
}

void solve(int l) {
    int n;
    cin >> n;
    vector<int> a(n+2);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[n+1] = l;
    vector< vector<int> > dpm(l+1, vector<int>(l+1, -1));
    int ans = cut(0, n+1, a, dpm);
    cout << "The minimum cutting is " << ans << "." <<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int l;
    cin >> l;
    while (l!= 0)
    {
        /* code */
        solve(l);
        cin >> l;
    }
    
    return 0;
}