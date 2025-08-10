#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp % k]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp % k]--;
        m[abs(temp - k) % k]--;
    }
    bool flag = true;
    for (auto it : m)
    {
        if (it.second > 0)
        {
            flag = false;
            break;
        }
    }
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