#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a.begin(), a.end());
    ll times = m / n;
    ll n1 = n;
    for (ll i = n - 1; i >= 0; i--)
    {
        ans += times * a[i] * n1;
        n1--;
    }
    n1 = m % n;
    ll i = n - 1;
    while (i >= 0 && n1 > 0)
    {
        ans += a[i] * n1;
        i--, n1--;
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