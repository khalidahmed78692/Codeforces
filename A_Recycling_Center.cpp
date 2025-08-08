#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, c;
    cin >> n >> c;
    vector<lli> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int coins = 0;
    int num = 0; // number of trash bags got destroyed;
    int i = n - 1;
    while (i >= 0)
    {
        if (v[i] * pow(2, num) <= c)
        {
            num++;
        }
        else
        {
            coins++;
        }
        i--;
    }
    cout << coins << endl;
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