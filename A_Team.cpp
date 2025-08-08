#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int sum = 0;
        int a, b, c;
        cin >> a >> b >> c;
        if (a)
            sum++;
        if (b)
            sum++;
        if (c)
            sum++;
        if (sum > 1)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}