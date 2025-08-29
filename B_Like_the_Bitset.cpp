#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int totalonecount = 0;
    int onecount = 0;

    for (char ch : s)
    {
        if (ch == '1')
        {
            totalonecount++;
            onecount++;
        }
        else
        {
            onecount = 0;
        }
        if (onecount >= k)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

    int one = 1;
    int zero = totalonecount + 1;

    for (char ch : s)
    {
        if (ch == '1')
        {
            cout << one++ << " ";
        }
        else
        {
            cout << zero++ << " ";
        }
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