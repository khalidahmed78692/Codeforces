#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    set<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            odd.insert(arr[i]);
        else
            even.insert(arr[i]);
    }
    int ans = 0;
    set<int>::iterator ite = even.begin(), ito = odd.begin();
    while (even.size() != 0 && odd.size() != 0)
    {
        int temp = *ite + *ito;
        if (*ite > *ito){
            odd.erase(ito);
        }
        else{
            even.erase(ite);
        }
        if (temp % 2)
            odd.insert(temp);
        else
            even.insert(temp);
        ans++;
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