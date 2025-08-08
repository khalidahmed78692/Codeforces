#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string str;
    cin >> str;
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < str.size(); i += 2)
        if (str[i] == '1')
            count1++;
        else if (str[i] == '2')
            count2++;
        else
            count3++;
    while (count1 > 0)
    {
        if (count1 == 1 && count2 == 0 && count3 == 0)
            cout << "1" << endl;
        else
            cout << "1+";
        count1--;
    }
    while (count2 > 0)
    {
        if (count2 == 1 && count3 == 0)
            cout << "2" << endl;
        else
            cout << "2+";
        count2--;
    }
    while (count3 > 0)
    {
        if (count3 == 1)
            cout << "3" << endl;
        else
            cout << "3+";
        count3--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}