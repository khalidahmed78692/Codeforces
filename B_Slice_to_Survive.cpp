#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    ll rowMax = max(a, n - a + 1);
    ll colMax = max(b, m - b + 1);
    cout << (int)log2(rowMax) + (int)log2(colMax)
         << endl;
    // int turns = 0;
    // if (n == 1 && m == 1)
    // {
    //     cout << turns << endl;
    //     return;
    // }
    // int rl = 0, rh = n;
    // int cl = 0, ch = m;
    // cout << "rl: " << rl << " rh: " << rh << " cl: " << cl << " ch: " << ch << endl;
    // if (rh - rl > ch - cl)
    // {
    //     if (abs(rl - a + 1) > abs(rh - a))
    //     {
    //         rl = a - 1;
    //     }
    //     else
    //     {
    //         rh = a;
    //     }
    // }
    // else
    // {
    //     if (abs(cl - b + 1) > abs(ch - b))
    //     {
    //         cl = b - 1;
    //         // cout << "cl: " << cl << endl;
    //     }
    //     else
    //     {
    //         ch = b;
    //         // cout << "ch: " << ch << endl;
    //     }
    // }
    // cout << "rl: " << rl << " rh: " << rh << " cl: " << cl << " ch: " << ch << endl;
    // turns++;
    // cout << "turns: " << turns << endl;
    // while (rl < rh - 1)
    // {
    //     rh = rl + (rh - rl + 1) / 2;
    //     turns++;
    //     // cout << "r turns: " << turns << endl;
    // }
    // while (cl < ch - 1)
    // {
    //     ch = cl + (ch - cl + 1) / 2;
    //     turns++;
    //     // cout << "c turns: " << turns << endl;
    // }
    // cout << turns << endl;
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