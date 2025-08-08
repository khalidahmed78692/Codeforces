#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, s, m;
    cin >> n >> s >> m;
    vector<vector<int>> arr(n,vector<int>(2,0));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    sort(arr.begin(),arr.end());
    bool flag = false;
    if (arr[0][0] >= s)
        flag = true;
    for (int i = 1; i < n; i++)
    {
        if (flag)
            break;
        if (arr[i][0] - arr[i - 1][1] >= s)
        {
            flag = true;
            break;
        }
    }
    if (m - arr[n - 1][1] >= s)
        flag = true;
    if (flag)
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