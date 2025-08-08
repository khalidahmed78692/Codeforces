#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    cin >> s;
    if (s[0] == '0' && s[1] == '0')
        cout << "12" << s.substr(2, 1) << s.substr(3, 1) << s.substr(4, 1) << " AM" << endl;
    else if (s[0] == '0' || (s[0] == '1' && (s[1] == '0' || s[1] == '1')))
        cout << s << " AM" << endl;
    else if (s[0] == '1' && s[1] == '2')
        cout << s << " PM" << endl;
    else if (s[0] == '1' && s[1] == '3')
        cout << "01" << s.substr(2) << " PM" << endl;
    else if (s[0] == '1' && s[1] == '4')
        cout << "02" << s.substr(2) << " PM" << endl;
    else if (s[0] == '1' && s[1] == '5')
        cout << "03" << s.substr(2) << " PM" << endl;
    else if (s[0] == '1' && s[1] == '6')
        cout << "04" << s.substr(2) << " PM" << endl;
    else if (s[0] == '1' && s[1] == '7')
        cout << "05" << s.substr(2) << " PM" << endl;
    else if (s[0] == '1' && s[1] == '8')
        cout << "06" << s.substr(2) << " PM" << endl;
    else if (s[0] == '1' && s[1] == '9')
        cout << "07" << s.substr(2) << " PM" << endl;
    else if (s[0] == '2' && s[1] == '0')
        cout << "08" << s.substr(2) << " PM" << endl;
    else if (s[0] == '2' && s[1] == '1')
        cout << "09" << s.substr(2) << " PM" << endl;
    else if (s[0] == '2' && s[1] == '2')
        cout << "10" << s.substr(2) << " PM" << endl;
    else if (s[0] == '2' && s[1] == '3')
        cout << "11" << s.substr(2) << " PM" << endl;
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