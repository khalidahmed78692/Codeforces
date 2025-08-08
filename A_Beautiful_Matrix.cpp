#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    // int n;
    // cin >> n;
    int arr[5][5];
    int onei,onej;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]){
                onei=i;
                onej=j;
            }
        }
    int ans=abs(onei-2)+abs(onej-2);
    cout<<ans<<endl;    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t = 1;
    // cin >> t;
    // while (t--)
        solve();
    return 0;
}