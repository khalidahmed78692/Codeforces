#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void helper(int i, int prevele, int curcount, int totalcount, vector<int> &a, int &ans)
{
    if (i == a.size())
    {
        if (prevele == curcount)
            totalcount += curcount;
        ans = max(ans, totalcount);
        return;
    }

    // take
    if(curcount==a[i])
        helper(i+1,-1,0,totalcount+curcount,a,ans);
    else
        helper(i+1,a[i],1,totalcount,a,ans);
    
    // not take
    if(curcount==a[i]){

    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    helper(0, -1, 0, 0, a, ans);
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