#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string str;
        cin >> str;
        if (str.compare("++X") == 0)
            x++;
        if (str.compare("--X") == 0)
            x--;
        if (str.compare("X++") == 0)
            x++;
        if (str.compare("X--") == 0)
            x--;
    }
    cout << x << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}