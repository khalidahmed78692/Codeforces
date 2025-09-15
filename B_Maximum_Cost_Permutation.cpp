#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] > 0)
            st.insert(p[i]);
    }

    int num = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (p[i] == 0)
        {
            while (st.find(num) != st.end())
                num++;
            p[i] = num++;
        }
    }

    int l = INT_MAX, r = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (p[i] != i + 1)
        {
            l = min(l, i);
            r = max(r, i);
        }
    }

    if (l == INT_MAX)
        cout << 0 << endl;
    else
    {
        cout << r - l + 1 << endl;
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