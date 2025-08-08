#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

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
    vector<int> mini, maxi(n);
    mini.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        mini.push_back(min(mini[i - 1], v[i]));
    }
    maxi[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        maxi[i] = max(v[i], maxi[i + 1]);
    }
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (mini[i] == v[i] || maxi[i] == v[i])
            ans += '1';
        else
            ans += '0';
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