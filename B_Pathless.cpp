#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, s;
    cin >> n >> s;
    int temp;
    int sum = 0;
    int countone = 0, countzero = 0, counttwo = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        if (temp == 0)
            countzero++;
        else if (temp == 1)
            countone++;
        else
            counttwo++;
    }
    if (s < sum || s - sum == 1)
    {
        while (countzero--)
            cout << 0 << " ";
        while (counttwo--)
            cout << 2 << " ";
        while (countone--)
            cout << 1 << " ";
        cout << endl;
    }
    else
        cout << -1 << endl;
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