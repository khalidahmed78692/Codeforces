#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    int count = 0;
    if (c > a && c < b)
        count++;
    if (d > a && d < b)
        count++;
    if (count % 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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