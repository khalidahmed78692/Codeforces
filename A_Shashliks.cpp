#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    int count = 0;
    if (n < a && n < b)
    {
        count = 0;
    }
    else if (x <= y)
    {
        int val;
        if (n >= a)
        {
            val = (n - a + 1) / x;
            count += val;
            if ((n - a + 1) % x)
            {
                count++;
                n -= x;
            }
            n -= val * x;
        }
        if (n >= b)
        {
            val = (n - b + 1) / y;
            count += val;
            if ((n - b + 1) % y)
            {
                count++;
                n -= y;
            }
            n -= val * y;
        }
    }
    else
    {
        int val;
        if (n >= b)
        {
            val = (n - b + 1) / y;
            count += val;
            if ((n - b + 1) % y)
            {
                count++;
                n -= y;
            }
            n -= val * y;
        }
        if (n >= a)
        {
            val = (n - a + 1) / x;
            count += val;
            if ((n - a + 1) % x)
            {
                count++;
                n -= x;
            }
            n -= val * x;
        }
    }
    cout << count << endl;
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