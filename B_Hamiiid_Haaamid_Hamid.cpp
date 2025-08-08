#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, x;
    cin >> n >> x;
    char temp;
    int leftwall = INT_MIN, rightwall = INT_MAX;
    int left = 0, right = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp == '#' && i < x)
        {
            leftwall = i;
            left++;
        }
        else if (temp == '#' && i > x)
        {
            rightwall = min(rightwall, i);
            right++;
        }
    }
    int ans = 0;
    if (x == 1 || x == n || (leftwall == INT_MIN && rightwall == INT_MAX))
    {
        ans = 1;
    }
    else if (leftwall + 1 == x || x + 1 == rightwall)
    {
        ans = min(x - 1, n - x) + 1;
    }
    else
    {
        if (leftwall < n - rightwall + 1)
        {
            if (left < right)
                ans = x - 1;
            else
                ans = leftwall;
        }
        else
        {
            if (right < left)
                ans = n - x;
            else
                ans = n - rightwall + 1;
        }
        ans++;
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