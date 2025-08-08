#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    string s;
    cin >> s;
    int fc = 0, tc = 0, nc = 0;
    string ans = "";
    for (char ch : s)
    {
        if (ch == 'F')
            fc++;
        else if (ch == 'N')
            nc++;
        else if (ch == 'T')
            tc++;
        else
            ans += ch;
    }
    while (tc--)
    {
        ans += 'T';
    }
    while (fc--)
    {
        ans += 'F';
    }
    while (nc--)
    {
        ans += 'N';
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