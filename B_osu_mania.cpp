#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cin >> temp;
            if (temp == '#')
                v.push_back(j);
        }
    }
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << endl;
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