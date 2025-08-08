#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> v;
    for (int i = 1; i <= n; i++)
    {
        vector<char> temp, temp1;
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2)
            {
                temp.push_back('.');
                temp.push_back('.');
                temp1.push_back('.');
                temp1.push_back('.');
            }
            else
            {
                temp.push_back('#');
                temp.push_back('#');
                temp1.push_back('#');
                temp1.push_back('#');
            }
        }
        v.push_back(temp);
        v.push_back(temp1);
    }
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            cout << v[i][j];
        }
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