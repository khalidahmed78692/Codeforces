#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int count = 0;

    bool increasing;
    int last_ele;
    string ans = "";
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (count < 2)
        {
            ans += 'L';
            if (count == 1)
            {
                if (last_ele - p[l] < 0)
                    increasing = true;
                else
                    increasing = false;
            }
            last_ele = p[l++];
        }
        else
        {
            if (last_ele < p[l] && last_ele < p[r])
            {
                if (p[l] < p[r])
                {
                    last_ele = p[r--];
                    ans += 'R';
                }
                else
                {
                    last_ele = p[l++];
                    ans += 'L';
                }
                increasing = true;
            }
            else if (last_ele > p[l] && last_ele > p[r])
            {
                if (p[l] > p[r])
                {
                    last_ele = p[r--];
                    ans += 'R';
                }
                else
                {
                    last_ele = p[l++];
                    ans += 'L';
                }
                increasing = false;
            }
            else if (last_ele < p[l])
            { // 4, 5, p[r]=3
                if (increasing == true)
                {
                    last_ele = p[r--];
                    increasing = false;
                    ans += 'R';
                }
                else
                {
                    last_ele = p[l++];
                    increasing = true;
                    ans += 'L';
                }
            }
            else
            { // 3,5,6
                if (increasing == true)
                {
                    last_ele = p[l++];
                    increasing = false;
                    ans += 'L';
                }
                else
                {
                    last_ele = p[r--];
                    increasing = true;
                    ans += 'R';
                }
            }
        }
        count++;
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