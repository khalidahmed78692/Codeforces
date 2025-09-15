#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll f = 0;
    ll maxi = INT_MIN;
    ll mini = INT_MAX;
    ll dans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            f -= a[i];
            maxi = max(maxi, 2 * a[i] - i);
            dans = max(dans, 2 * a[i] + i - mini);
        }
        else
        {
            f += a[i];
            mini = min(mini, 2 * a[i] + i);
            dans = max(dans, maxi - 2 * a[i] + i);
        }
    }

    if (n % 2)
    {
        dans = max(dans, n - 1);
    }
    else
    {
        dans = max(dans, n - 2);
    }

    cout << f + dans << endl;
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