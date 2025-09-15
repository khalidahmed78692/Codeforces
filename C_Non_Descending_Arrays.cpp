#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int
#define MOD 998244353

int helper(int i, vector<int> &a, vector<int> &b, vector<vector<int>> &dp, int prev)
{
    if (i == a.size())
    {
        bool ans = true;
        for (int idx = 1; idx < a.size(); idx++)
            if (a[idx - 1] > a[idx] || b[idx - 1] > b[idx])
                ans = false;
        return ans ? 1 : 0;
    }

    if (dp[i][prev] != -1)
        return dp[i][prev];

    swap(a[i], b[i]);
    int take = helper(i + 1, a, b, dp, i + 1);
    swap(a[i], b[i]);
    int nottake = helper(i + 1, a, b, dp, prev);

    return dp[i][prev] = ((ll)take + nottake) % MOD;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<vector<int>> dp(n, vector<int>(n + 1, -1));

    cout << helper(0, a, b, dp, 0) << endl;
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