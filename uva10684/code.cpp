#include "bits/stdc++.h"
using namespace std;

void solve(int n) {
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    int max_so_far = 0;
    for(int i = 0; i < n; i++) {
        max_so_far = max(a[i], max_so_far+a[i]);
        if(max_so_far > ans) {
            ans = max_so_far;
        }
    }
    if(ans <= 0) {
        cout << "Losing streak." << endl;
    } else {
        cout << "The maximum winning streak is " << ans <<"."<<endl;;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    while (n != 0)
    {
        /* code */
        solve(n);
        cin >> n;
    }
    
    return 0;
}