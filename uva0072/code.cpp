#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    string s;
    string str1 = "``";
    string str2 = "''";

    while (getline(cin, s))
    {
        /* code */
        bool flag = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '"')
            {
                s.erase(i, 1);
                if (flag)
                {
                    s.insert(i, str1);
                }
                else
                {
                    s.insert(i, str2);
                }
                flag = !flag;
            }
        }
        cout << s << endl;
    }

    return 0;
}