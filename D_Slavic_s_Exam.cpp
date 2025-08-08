#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    int n = s.size(), m = t.size();
    while (i < n && j < m)
    {
        if (s[i] == t[j])
            j++;
        else if (s[i] == '?')
        {
            s[i] = t[j];
            j++;
        }
        i++;
    }
    if (j < m)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (i < n){
            if (s[i] == '?')
                s[i] = 'a';
            i++;
        }
        cout << "YES" << endl;
        cout << s << endl;
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