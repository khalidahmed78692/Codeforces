#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    lli l, r;
    cin >> l >> r;
    lli ans = r - l + 1;
    // a+b+c+d
    lli c1 = (r / 2) - (l - 1) / 2 + (r / 3) - (l - 1) / 3 + (r / 5) - (l - 1) / 5 + (r / 7) - (l - 1) / 7;

    // a n b, a n c, a n d, b n c, b n d, c n d
    c1 = c1 - ((r / 6) - (l - 1) / 6 + (r / 10) - (l - 1) / 10 + (r / 14) - (l - 1) / 14 + (r / 15) - (l - 1) / 15 + (r / 21) - (l - 1) / 21 + (r / 35) - (l - 1) / 35);

    // a n b n c, a n b n d, a n c n d, b n c n d
    c1 = c1 + ((r / 30) - (l - 1) / 30 + (r / 42) - (l - 1) / 42 + (r / 70) - (l - 1) / 70 + (r / 105) - (l - 1) / 105);

    // a n b n c n d
    c1 = c1 - ((r / 210) - (l - 1) / 210);
    ans -= c1;
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