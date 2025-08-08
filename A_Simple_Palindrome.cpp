#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    string str;
    while (n > 0)
    {
        if (n % 5 == 0)
        {
            str += 'a';
        }
        else if (n % 5 == 1)
        {
            str += 'e';
        }
        else if (n % 5 == 2)
        {
            str += 'i';
        }
        else if (n % 5 == 3)
        {
            str += 'o';
        }
        else if (n % 5 == 4)
        {
            str += 'u';
        }
        n--;
    }
    cout << str << endl;
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