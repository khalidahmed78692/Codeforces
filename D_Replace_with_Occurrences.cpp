#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n;
    cin >> n;
    ll temp;
    unordered_map<ll,ll> st;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        b.push_back(temp);
        st[temp]++;
    }
    ll sum = 0;
    bool ans=true;
    for (auto it : st){
        if(it.second%it.first){
            ans=false;
            break;
        }
    }
    if (ans)
    {
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
    }
    else
    {
        cout << -1;
    }
    cout << endl;
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