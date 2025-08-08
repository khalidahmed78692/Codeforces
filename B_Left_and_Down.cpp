#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

lli findGCD(lli a, lli b)
{
    if (a == 0)
        return b;
    return findGCD(b % a, a);
}

void solve()
{
    lli a, b, k;
    cin >> a >> b >> k;
    lli gcd = findGCD(a, b);
    a /= gcd;
    b /= gcd;
    // cout << "a: " << a << " b: " << b << endl;
    int ans = 0;
    if (k >= a && k >= b)
    {
        ans++;
    }
    // else if (k < a && k < b)
    // {
    //     ans += 3;
    // }
    else
    {
        ans += 2;
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