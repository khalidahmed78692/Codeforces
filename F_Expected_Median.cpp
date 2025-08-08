#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int countOnes = 0;
    for (int i = 0; i < k - 1; i++)
    {
        if (arr[i])
            countOnes++;
    }
    int m = 1e9 + 7;
    int ans = 0;
    for (int i = k - 1; i < n; i++)
    {
        if (arr[i])
            countOnes++;
        if (countOnes > k / 2)
            ans = ((long)ans + 1) % m;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j - 1])
                countOnes--;
            if (arr[j])
                countOnes++;
            if (countOnes > k / 2)
                ans = ((long)ans + 1) % m;
        }
        if (arr[n - 1])
            countOnes--;
        if (arr[i - k + 1])
            countOnes--;
        if (arr[i])
            countOnes++;
    }
    cout << ans << endl;
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