#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll prefixsum = 0;
    ll ans = 0;
    ll largestelement=0;
    for (ll i = 0; i < n; i++)
    {
        prefixsum += arr[i];
        largestelement=max(largestelement,arr[i]);
        if (prefixsum == 2 * largestelement){
            ans++;
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