#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (a == b)
    {
        ans = 0;
    }
    else if (a % b == 0 || b % a == 0)
    {
        ans = 1;
    }
    else
    {
        ans = 2;
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