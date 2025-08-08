#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    string v;
    cin >> v;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (((i + 1) % k) == 0)
        {
            // cout << (i + 1) << endl;
            if (v[i] == '1')
                c1++;
        }
        else
        {
            if (v[i] == '1')
                c2++;
        }
    }
    // cout << "c1: " << c1 << " c2: " << c2 << endl;
    if (c1 > k || c2 > k)
    {
        cout << "Bob" << endl;
    }
    else if (c1 == 1 && c2 <= k)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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