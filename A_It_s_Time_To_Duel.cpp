#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int zerocount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
            bool flag = false;
            if (i - 1 >= 0 && arr[i - 1] == 0)
                flag = true;
            if (i + 1 < n && arr[i + 1] == 0)
                flag = true;
            if (flag)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    if (zerocount == 0)
        cout << "YES" << endl;
    else
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