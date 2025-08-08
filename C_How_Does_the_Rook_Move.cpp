#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int r, c;
    vector<vector<pair<bool, bool>>> chess(n, vector<pair<bool, bool>>(n, {false, false}));
    for (int i = 0; i < k; i++)
    {
        cin >> r >> c;
        chess[r][c] = {true, false};
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