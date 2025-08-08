#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
    int n = str1.size();
    unordered_map<char, int> m;
    for (int i = 0; i < 26; i++)
    {
        m[i + 'a'] = i;
        m[i + 'A'] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int temp1 = m[str1[i]];
        int temp2 = m[str2[i]];
        if (temp1 != temp2)
        {
            if (temp1 > temp2)
                cout << "1" << endl;
            else
                cout << "-1" << endl;
            return;
        }
    }
    cout << "0" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}