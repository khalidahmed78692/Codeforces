#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    int index, val;
    vector<string> ans;
    for (int i = 0; i < q; i++)
    {
        cin >> index >> val;
        if (val)
        {
            s[index - 1] = '1';
        }
        else
        {
            s[index - 1] = '0';
        }
        if (s.size() >= 4)
        {
            bool flag = true;
            for (int i = 0; i < s.size() - 3; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
                {
                    ans.push_back("YES");
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans.push_back("NO");
        }
        else
        {
            ans.push_back("NO");
        }
    }
    for (int i = 0; i < q; i++)
        cout << ans[i] << endl;
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