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
    int zerocount = 0;
    for (char c : s)
    {
        if (c == '0')
            zerocount++;
    }

    int ans = 0;
    for (int i = 0; i < zerocount; i++)
    {
        if (s[i] == '1')
            ans++;
    }
    cout << ans << endl;
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