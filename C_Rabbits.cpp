#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag;
    for (int i = 1; i < n - 1; i++)
    {
        flag = false;
        if (s[i] == '0')
        {
            if (i - 2 >= 0 && s[i - 2] == '0')
                flag = true;
            if (i - 1 >= 0 && s[i - 1] == '0')
                flag = true;
            if (i + 1 < n && s[i + 1] == '0')
                flag = true;
            if (i + 2 < n && s[i + 2] == '0')
                flag = true;
            if (flag == false)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}