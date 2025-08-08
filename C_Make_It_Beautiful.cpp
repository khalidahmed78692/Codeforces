#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    lli k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < 64; i++)
    {
        ll cost = (1LL << i);
        if (cost > k)
            break;
        for (int j = 0; j < n; j++)
        {
            if (!(v[j] & cost) && k >= cost)
            {
                k -= cost;
                v[j] = v[j] | (1LL << i);
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll val = v[i];
        while (val)
        {
            if (val & 1)
                ans++;
            val >>= 1;
        }
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