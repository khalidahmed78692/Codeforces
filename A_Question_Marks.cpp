#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < 4 * n; i++)
    {
        if (str[i] == 'A')
            a++;
        else if (str[i] == 'B')
            b++;
        else if (str[i] == 'C')
            c++;
        else if (str[i] == 'D')
            d++;
    }
    int ans = min(a, n) + min(b, n) + min(c, n) + min(d, n);
    cout << ans << endl;
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