#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int temp1 = -1, temp2, val;
    string ans = "YES";
    for (int i = 0; i < n; i++)
    {
        cin >> temp2;
        if (temp1 != -1)
        {
            int val = abs(temp1 - temp2);
            if (val != 5 && val != 7)
            {
                ans = "NO";
            }
        }
        temp1 = temp2;
    }
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