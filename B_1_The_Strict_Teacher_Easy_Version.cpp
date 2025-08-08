#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> cell(n + 1, 0);
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        cell[temp] = 1;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        cell[temp] = 2;
    }
    int dist1 = 0;
    bool flag1 = false;
    for (int i = temp; i >= 0; i--)
    {
        if (cell[i] == 1)
        {
            flag1 = true;
            break;
        }
        dist1++;
    }
    int dist2 = 0;
    bool flag2 = false;
    for (int i = temp; i <= n; i++)
    {
        if (cell[i] == 1)
        {
            flag2 = true;
            break;
        }
        dist2++;
    }
    if (flag1 && flag2)
    {
        cout << min(dist1, dist2) << endl;
    }
    else if (flag1)
    {
        cout << dist1 + (n - temp) << endl;
    }
    else
    {
        cout << dist2 + temp - 1 << endl;
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