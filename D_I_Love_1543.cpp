#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        vector<int> v1;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            v1.push_back(temp);
            cout << temp << " ";
        }
        v.push_back(v1);
        cout << endl;
    }
    ll ans = 0;
    // int row = n / 2;
    // int col = m / 2;
    // int layer = min(row, col);
    // vector<int> num={1, 5, 4, 3};
    // for (int i = 0; i < 4; i++)
    //     cout << num[i] << endl;
    // for (int l = 0; l < layer; l++)
    // {
    //     int k = 0;
    //     for (int c = l; c < m - l; c++)
    //     {
    //         if (v[l][c] == num[k])
    //             k++;
    //         if (k == 4)
    //         {
    //             k = 0;
    //             ans++;
    //         }
    //     }
    //     for (int r = l + 1; r < n - l; r++)
    //     {
    //         if (v[r][m - 1 - l] == num[k])
    //             k++;
    //         if (k == 4)
    //         {
    //             k = 0;
    //             ans++;
    //         }
    //     }
    //     for (int c = m - l - 2; c >= l; c--)
    //     {
    //         if (v[n - 1 - l][c] == num[k])
    //             k++;
    //         if (k == 4)
    //         {
    //             k = 0;
    //             ans++;
    //         }
    //     }
    //     for (int r = n - 2 - l; r >= l; r--)
    //     {
    //         if (v[r][l] == num[k])
    //             k++;
    //         if (k == 4)
    //         {
    //             k = 0;
    //             ans++;
    //         }
    //     }
    //     if (k > 0)
    //     {
    //         bool flag = true;
    //         for (int c = l; c < m - l; c++)
    //         {
    //             if (flag)
    //                 break;
    //             if (v[l][c] == num[k])
    //             {
    //                 k++;
    //             }
    //             if (k == 4)
    //             {
    //                 ans++;
    //                 flag = true;
    //             }
    //         }
    //         for (int r = l + 1; r < n - l; r++)
    //         {
    //             if (flag)
    //                 break;
    //             if (v[r][m - l - 1] == num[k])
    //             {
    //                 k++;
    //             }
    //             if (k == 4)
    //             {
    //                 ans++;
    //                 flag = true;
    //             }
    //         }
    //         for (int c = m - l - 2; c >= l; c--)
    //         {
    //             if (flag)
    //                 break;
    //             if (v[n - l - 1][c] == num[k])
    //             {
    //                 k++;
    //             }
    //             if (k == 4)
    //             {
    //                 ans++;
    //                 flag = true;
    //             }
    //         }
    //         for (int r = n - 2 - l; r >= l; r--)
    //         {
    //             if (flag)
    //                 break;
    //             if (v[r][l] == num[k])
    //             {
    //                 k++;
    //             }
    //             if (k == 4)
    //             {
    //                 ans++;
    //                 flag = true;
    //             }
    //         }
    //     }
    // }
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