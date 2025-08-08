#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    bool same = true;
    int val = -1;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp != -1)
        {
            if (val == -1)
            {
                val = temp;
            }
            else if (val != temp)
            {
                same = false;
            }
        }
    }
    if (same && val != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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