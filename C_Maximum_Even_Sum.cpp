#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = -1;

    if (a % 2 && b % 2)
    {
        ans = a * b + 1;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        ans = a + b;
        ll k = b / 2;
        ll sum = a * k + b / k;
        if (sum % 2 == 0)
            ans = max(ans, sum);
    }
    else if (a % 2 && b % 2 == 0)
    {
        ll k = b / 2;
        ll sum = a * k + b / k;
        if (sum % 2 == 0)
            ans = max(ans, sum);
    }
    // a is even and b is odd -----> -1
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