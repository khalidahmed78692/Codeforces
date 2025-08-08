#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int advancers = 0;
    int kscore = 0;
    while (n--)
    {
        int score;
        cin >> score;
        if (k == 0)
        {
            if (score > 0 && score >= kscore)
                advancers++;
        }
        if (score > 0 && k > 0)
            advancers++;
        if (k != 0)
            k--;
        if (k == 0)
            kscore = max(score, kscore);
    }
    cout << advancers << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}