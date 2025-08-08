#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool same = true;
    for (int i = 0; i < n - 1; i++)
        if (s[i] != s[i + 1])
        {
            same = false;
            swap(s[i], s[i + 1]);
            break;
        }
    if (same)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl
             << s << endl;
    }
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