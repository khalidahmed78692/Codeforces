#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int dx = (x + k - 1) / k;
    int dy = (y + k - 1) / k;
    if (dy >= dx)
        cout << 2 * dy << endl;
    else
        cout << 2 * dx - 1 << endl;
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