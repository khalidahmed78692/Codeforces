#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int k;
    cin >> k;
    vector<int> v(2 * k + 1, 1);
    for (int i = 1; i <= 2 * k; i++)
    {
        for (int j = 1; j <= 2 * k; j++)
        {
            if (j % i == 0)
                v[j] ^= 1;
        }
    }
    int count1 = 0;
    for (int j = 1; j <= 2 * k; j++)
    {
        if (v[j] == 1)
            count1++;
        if (count1 == k)
        {
            cout << j << endl;
            break;
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