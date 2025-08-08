#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'N')
            y++;
        else if (s[i] == 'S')
            y--;
        else if (s[i] == 'E')
            x++;
        else
            x--;
    }
    if (x <= 0 && y <= 0)
    {
        cout << "NO" << endl;
        return;
    }
    if (x == 0)
    {
        if (a > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }
    if (y == 0)
    {
        if (b > 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }
    x = 0, y = 0;
    bool flag;
    while (x <= a || y <= b)
    {
        flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'N')
            {
                y++;
            }
            else if (s[i] == 'S')
            {
                y--;
            }
            else if (s[i] == 'E')
            {
                x++;
            }
            else
            {
                x--;
            }
            if (x == a && y == b)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
    if (!flag)
        cout << "NO" << endl;
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