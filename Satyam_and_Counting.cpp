#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int temp1, temp2;
    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        v.push_back({temp1, temp2});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << v[i].first << " " << v[i].second << endl;
        if (v[i].first == v[i + 1].first)
        {
            ans += (n - 2);
        }
        if (v[i].second == 1)
        {
            if (i > 0 && i < n - 1)
            {
                if (v[i].first - v[i - 1].first == 1 && v[i + 1].first - v[i].first == 1 && abs(v[i].second - v[i - 1].second) == 1 && abs(v[i + 1].second - v[i].second) == 1)
                {
                    ans++;
                }
            }
            if (i > 1 && i < n - 1)
            {
                if (v[i].first - v[i - 2].first == 1 && v[i + 1].first - v[i].first == 1 && abs(v[i].second - v[i - 2].second) == 1 && abs(v[i + 1].second - v[i].second) == 1)
                {
                    ans++;
                }
            }
            if (i > 2 && i < n - 1)
            {
                if (v[i].first - v[i - 3].first == 1 && v[i + 1].first - v[i].first == 1 && abs(v[i].second - v[i - 3].second) == 1 && abs(v[i + 1].second - v[i].second) == 1)
                {
                    ans++;
                }
            }
        }
        if (v[i].second == 0)
        {
            if (i > 0 && i < n - 1)
            {
                if (v[i].first - v[i - 1].first == 1 && v[i + 1].first - v[i].first == 1 && abs(v[i].second - v[i - 1].second) == 1 && abs(v[i + 1].second - v[i].second) == 1)
                    ans++;
            }
            if (i > 0 && i < n - 2)
            {
                if (v[i].first - v[i - 1].first == 1 && v[i + 2].first - v[i].first == 1 && abs(v[i].second - v[i - 1].second) == 1 && abs(v[i + 2].second - v[i].second) == 1)
                    ans++;
            }
            if (i > 0 && i < n - 3)
            {
                if (v[i].first - v[i - 1].first == 1 && v[i + 3].first - v[i].first == 1 && abs(v[i].second - v[i - 1].second) == 1 && abs(v[i + 3].second - v[i].second) == 1)
                    ans++;
            }
        }
    }
    // cout << v[n - 1].first << " " << v[n - 1].second << endl;
    cout << ans << endl;
}

// . 0 0 . . .
// . 0 . 0 . 0

// . . . .
// 0 0 . 0

// . . 0 . . . . 0 0 0
// . 0 0 0 0 0 . . . .

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