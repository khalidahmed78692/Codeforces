#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool ans = true;

    if (a < b)
    {
        int count = b / 2;
        if (b % 2)
            count++;
        if (count - a > 1)
        {
            ans = false;
        }
    }
    else if (a > b)
    {
        int count = a / 2;
        if (a % 2)
            count++;
        if (count - b > 1)
        {
            ans = false;
        }
    }

    if (ans == false)
    {
        cout << "NO" << endl;
        return;
    }

    c -= a;
    d -= b;

    a = c;
    b = d;

    if (a < b)
    {
        int count = b / 2;
        if (b % 2)
            count++;
        if (count - a > 1)
        {
            ans = false;
        }
    }
    else if (a > b)
    {
        int count = a / 2;
        if (a % 2)
            count++;
        if (count - b > 1)
        {
            ans = false;
        }
    }

    if (ans == false)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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