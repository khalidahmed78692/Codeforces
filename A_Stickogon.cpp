#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    int count = 0;
    map<int, int>::iterator it = m.begin();
    while (it != m.end())
    {
        if (it->second > 2)
            count++;
        it++;
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}