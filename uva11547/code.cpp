#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    //cout << "Test " << s <<endl;
    int n = s.size();
    if(s == "1" || s == "4" || s == "78") {
        cout << "+" << endl;
    } else {
        string tmp = s.substr(n-2,2);
        //cout << tmp << endl;
        if(tmp == "35") {
            cout << "-" <<endl;
        } else {
            if(s[0] == '9' && s[n-1] == '4') {
                cout << "*" <<endl;
            } else {
                
                    cout << "?" <<endl;
                
            }
        }

    } 
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