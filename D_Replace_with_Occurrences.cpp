#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, vector<int>> mpp;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mpp[b[i]].push_back(i);
    }

    int num = 1;
    for (auto it : mpp)
    {
        if (it.second.size() % it.first)
        {
            cout << -1 << endl;
            return;
        }
        int m = it.second.size();
        int val = it.first;
        for (int i = 0; i < m; i++)
        {
            a[it.second[i]] = num;
            if ((i + 1) % val == 0)
                num++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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