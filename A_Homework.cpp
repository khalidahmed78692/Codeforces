#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, m;
    string a, b, orders;
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    cin >> orders;

    string vstr = "";
    string dstr = "";

    for (int i = 0; i < m; i++)
    {
        if (orders[i] == 'V')
            vstr += b[i];
        else
            dstr += b[i];
    }

    reverse(vstr.begin(), vstr.end());

    string ans = vstr + a + dstr;
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