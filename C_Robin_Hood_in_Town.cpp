#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    int temp;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
        sum+=temp;
    }
    sort(a.begin(),a.end());
    
    if(n%2){

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