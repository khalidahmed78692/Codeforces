#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    set<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (v.find(temp) != v.end())
            v.insert(temp + x);
        else
            v.insert(temp);
    }
    int ans = 0;
    set<int>::iterator it = v.begin();
    while (it != v.end())
    {
        if (*it != ans)
            break;
        ans++;
        it++;
    }
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