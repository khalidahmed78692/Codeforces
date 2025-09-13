#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    ll even_sum = 0;
    vector<ll> odd;
    ll a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 2 == 0)
            even_sum += a;
        else
            odd.push_back(a);
    }

    if (odd.size() > 0)
    {
        sort(odd.rbegin(), odd.rend());
        int len = (odd.size() - 1) / 2;
        for (int i = 0; i <= len; i++)
        {
            even_sum += odd[i];
        }
        cout << even_sum;
    }
    else
    {
        cout << 0;
    }
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