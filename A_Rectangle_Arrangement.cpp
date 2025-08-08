#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int width = 0, height = 0;
    int w, h;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> h;
        width = max(w, width);
        height = max(h, height);
    }
    cout << 2 * (width + height) << endl;
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