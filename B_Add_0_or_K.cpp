#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    if (n == 1)
    {
        v[0] += k;
    }
    else if (k % 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2)
            {
                v[i] += k;
            }
        }
    }
    /*
    5 2
    5 6 7 8 9
    */
    else
    {
        bool flag=false;
        for(int i=0;i<n;i++){
            if(v[i]%2){
                flag=true;
                break;
            }
        }
        if(flag){
            
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
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