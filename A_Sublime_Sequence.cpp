#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int x, n;
    cin >> x >> n;
    int ans;
    if (n % 2)
        ans = x;
    else
        ans = 0;
    cout << ans << endl;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input1.txt", "r", stdin);
//     // for writing output to output.txt
//     freopen("output1.txt", "w", stdout);
// #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}