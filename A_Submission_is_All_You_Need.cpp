#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int score = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 0)
            score++;
        else
            score += temp;
    }
    cout << score << endl;
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