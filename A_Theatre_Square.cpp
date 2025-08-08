#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll vertical = n / a;
    if (n % a)
        vertical++;
    ll horizontal = m / a;
    if (m % a)
        horizontal++;
    cout << vertical * horizontal << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
