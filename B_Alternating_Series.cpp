#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i += 2)
    {
        ans[i] = -1;
    }
    int idx = n - 1;
    if (n & 1)
    {
        idx--;
        while (idx > 0)
        {
            ans[idx] = 3;
            idx -= 2;
        }
    }
    else
    {
        ans[idx] = 2;
        idx -= 2;
        while (idx > 0)
        {
            ans[idx] = 3;
            idx -= 2;
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
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