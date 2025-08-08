#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int count0 = 0, count1 = 0;
    int temp;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> temp;
        if (temp)
            count1++;
        else
            count0++;
    }
    cout << count1 % 2 << " ";
    if (count0 >= count1)
        temp = count1;
    else
    {
        temp = count0;
    }
    cout << temp << endl;
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