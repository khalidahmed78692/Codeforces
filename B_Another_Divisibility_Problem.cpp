#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int x;
    cin >> x;
    int y;
    if (x % 2)
    {
        y = 2 * x;
    }
    else
    {
        y = x / 2;
    }
    cout << y << endl;
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