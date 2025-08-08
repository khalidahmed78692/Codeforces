#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n == 1)
        cout << "1\n1\n";
    else if (k == 1 || k == n)
        cout << -1 << endl;
    else
    {
        int leftright = min(k - 1, n - k);
        int m = leftright * 2 + 1;
        cout << m << endl;
        for (int i = 1; i <= leftright; i++)
            cout << i << " ";
        cout << k << " ";
        for (int i = 1; i <= leftright; i++)
            cout << (k + i) << " ";
        cout << endl;
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