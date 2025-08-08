#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int ans = 0;
    if ((a1 >= b1 && a2 > b2) || (a1 > b1 && a2 >= b2))
        ans++;
    if ((a1 >= b2 && a2 > b1) || (a1 > b2 && a2 >= b1))
        ans++;
    if ((a2 >= b2 && a1 > b1) || (a2 > b2 && a1 >= b1))
        ans++;
    if ((a2 >= b1 && a1 > b2) || (a2 > b1 && a1 >= b2))
        ans++;
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