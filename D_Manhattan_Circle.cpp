#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    int a, b;
    int prevcount = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool first = true;
        int tempa, tempb;
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '#')
            {
                count++;
                if (first)
                {
                    tempa = i + 1;
                    tempb = j + 1;
                    first = false;
                }
            }
        }
        if (prevcount < count)
        {
            a = tempa;
            b = tempb + count / 2;
        }
        prevcount = count;
    }
    cout << a << " " << b << endl;
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