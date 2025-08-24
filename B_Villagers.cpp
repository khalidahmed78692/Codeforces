#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<ll> g;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        g.push_back(temp);
    }

    sort(g.begin(), g.end());

    int i = n - 1;
    ll ans = 0;
    while (i >= 0)
    {
        ans += g[i];
        i -= 2;
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