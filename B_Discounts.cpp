#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];

    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    ll min_cost = 0;
    int i = 0, j = 0;
    while (i < n && j < k)
    {
        int x = b[j];
        while (i < n && x > 1)
        {
            min_cost += a[i];
            i++;
            x--;
        }
        i++, j++;
    }
    while (i < n)
    {
        min_cost += a[i];
        i++;
    }
    cout << min_cost << endl;
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