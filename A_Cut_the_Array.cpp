#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    // solution 1

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             int s1 = 0, s2 = 0, s3 = 0;
    //             for (int idx = 0; idx < n; idx++)
    //             {
    //                 if (idx <= i)
    //                     s1 += a[idx];
    //                 else if (idx <= j)
    //                     s2 += a[idx];
    //                 else
    //                     s3 += a[idx];
    //             }
    //             s1 %= 3;
    //             s2 %= 3;
    //             s3 %= 3;
    //             if ((s1 == s2 && s2 == s3) || (s1 != s2 && s2 != s3 && s1 != s3))
    //             {
    //                 cout << i + 1 << " " << j + 1 << endl;
    //                 return;
    //             }
    //         }
    //     }
    // }
    // cout << 0 << " " << 0 << endl;

    // solution 2
    if (sum % 3)
    {
        cout << "0 0" << endl;
    }
    else
    {
        cout << "1 2" << endl;
    }
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