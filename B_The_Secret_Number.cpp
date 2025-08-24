#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void helper(string str, string &nstr, vector<ll> &ans, ll &n)
{
    if (str.size() >= nstr.size())
        return;
    int i = str.size();
    // cout << "i: " << i << endl;
    string xstr = str;
    xstr += nstr[i];
    string ystr = xstr;
    while (ystr.size() < nstr.size())
        ystr += '0';
    ll x = stoll(xstr);
    ll y = stoll(ystr);
    if (x + y == n)
        ans.push_back(x);

    helper(xstr, nstr, ans, n);

    xstr[i] = '0';
    ystr[i] = '0';
    x = stoll(xstr);
    y = stoll(ystr);
    if (x + y == n)
        ans.push_back(x);

    helper(xstr, nstr, ans, n);
}

void solve()
{
    ll n;
    cin >> n;
    string nstr = to_string(n);
    int len = nstr.size();
    string str = "";
    vector<ll> ans;
    // cout << n << " " << len << endl;
    helper("", nstr, ans, n);

    cout << ans.size() << endl;
    if (ans.size() > 0)
    {
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
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