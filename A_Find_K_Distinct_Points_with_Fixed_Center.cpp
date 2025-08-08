#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    if (k == 1)
        cout << x << " " << y << endl;
    else if (k % 2 == 0)
    {
        cout << x << " " << y << endl;
        k--;
        if (k == 1)
        {
            if (x == 0)
            {
                cout << x << " " << -y << endl;
            }
            else if (y == 0)
            {
                cout << -x << " " << y << endl;
            }
        }
        else
        {
            x++, y++;
            if (x == 0 && y == 0)
                x++, y++;
            int sumx = x, sumy = y;
            cout << x << " " << y << endl;
            x++, y++;
            if (x == 0 && y == 0)
                x++, y++;
            sumx += x, sumy += y;
            cout << x << " " << y << endl;
            cout << -sumx << " " << -sumy << endl;
            k -= 3;
            while (k > 0)
            {
                x++;
                y++;
                if (x == 0 && y == 0)
                    x++, y++;
                cout << x << " " << y << endl;
                cout << -x << " " << -y << endl;
                k -= 2;
            }
        }
    }
    else
    {
        cout << x << " " << y << endl;
        k -= 1;
        while (k > 0)
        {
            x++;
            y++;
            if (x == 0 && y == 0)
                x++, y++;
            cout << x << " " << y << endl;
            cout << -x << " " << -y << endl;
            k -= 2;
        }
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