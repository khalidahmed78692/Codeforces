#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(k + 1, 0);
    int index, cost;
    for (int i = 0; i < k; i++)
    {
        cin >> index >> cost;
        v[index] += cost;
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < min(n, k); i++)
    {
        ans += v[k - i];
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