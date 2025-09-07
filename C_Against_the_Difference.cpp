#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

ll DP(ll i, vector<ll> &v, unordered_map<ll, vector<ll>> &ind, unordered_map<ll, ll> &m, vector<ll> &dp)
{
    ll n = ind.size();
    if (i == n)
        return 0;

    if (dp[i] != -1)
        return dp[i];

    ll ans = DP(i + 1, v, ind, m, dp);

    ll cur = v[i];
    ll at = m[i];

    if (at + v[i] - 1 < ind[cur].size())
        ans = max(ans, v[i] + DP(ind[cur][at + v[i] - 1] + 1, v, ind, m, dp));
        

    cout << "ans: " << ans << endl;
    return dp[i] = ans;
}

void solve()
{
    ll n;
    cin >> n;

    unordered_map<ll, vector<ll>> ind;
    unordered_map<ll, ll> m;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        ind[v[i]].push_back(i);
        m[i] = ind[v[i]].size() - 1;
    }

    vector<ll> dp(n, -1);

    cout << DP(0, v, ind, m, dp) << endl;
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