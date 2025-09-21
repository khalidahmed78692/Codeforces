#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int x, y;
    cin >> x >> y;
    if (x < y)
    {
        cout << 2;
    }
    else if (x == y)
    {
        cout << -1;
    }
    else
    {
        int x1 = 1;
        int x2 = x - 1;
        if (x1 < y && y < x2)
        {
            cout << 3;
        }
        else
        {
            cout << -1;
        }
    }
    cout << endl;
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