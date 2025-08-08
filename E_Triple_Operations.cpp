#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int l, r;
    cin >> l >> r;
    int n=r-l;
    int templ=l;
    int count = 0;
    while(templ>0){
        count ++;
        templ/=3;
    }
    int ans=(2+n)*count;
    ans+=(n+1)/3;
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