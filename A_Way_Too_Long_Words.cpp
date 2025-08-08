#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    if (n > 10)
    {
        cout << str[0] << n - 2 << str[n - 1] << endl;
    }
    else
        cout << str << endl;
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