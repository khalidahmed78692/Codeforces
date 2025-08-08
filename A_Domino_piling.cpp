#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int m, n;
    cin >> m >> n;
    int pizzas = m / 2 * n;
    if (m % 2)
    {
        pizzas += n / 2;
    }

    cout << pizzas << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}