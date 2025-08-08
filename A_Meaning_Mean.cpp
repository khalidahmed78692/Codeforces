#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i += 2)
    {
        sort(v.begin() + i, v.end());
        if (i + 1 == v.size())
        {
            cout << v[v.size() - 1] << endl;
            break;
        }
        int val = (v[i] + v[i + 1]) / 2;
        v.push_back(val);
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