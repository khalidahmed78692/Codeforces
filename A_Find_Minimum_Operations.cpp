#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == 1 || n < k)
        cout << n << endl;
    else
    {
        int ans = 0;
        while (n > 0)
        {
            int i = 0;
            int prev;
            while (n - pow(k, i) >= 0)
            {
                prev = i;
                i++;
            }
            n -= pow(k, prev);
            if (n < k)
            {
                ans += n+1;
                break;
            }
            ans++;
        }
        cout << ans << endl;
    }
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