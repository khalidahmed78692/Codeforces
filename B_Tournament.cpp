#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int ele = v[j - 1];
    int smaller = 0, greater = 0;
    for (auto val : v)
    {
        if (val <= ele)
            smaller++;
        else
            greater++;
    }
    if (greater > 0)
        greater--;
    if (smaller + greater > n - k)
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