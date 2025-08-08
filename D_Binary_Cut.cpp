#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool first = true;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == '0' && s[i + 1] == '1' && first)
            {
                first = false;
            }
            else
            {
                ans++;
            }
        }
    }
    cout << ans + 1 << endl;
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