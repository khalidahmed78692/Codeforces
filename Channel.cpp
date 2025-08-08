#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    out:
        if (!t)
            break;
        int n, a, q;
        string s;
        cin >> s;
        if (n == a)
        {
            cout << "YES" << endl;
            t--;
            goto out;
        }
        int count = a;
        int maxcount = a;
        int mincount = a;
        for (int i = 0; i < q; i++)
        {
            if (s[i] == '+')
            {
                maxcount++;
                count++;
            }
            else
            {
                mincount--;
                count--;
            }
            if (maxcount >= n)
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (maxcount < n)
            cout << "NO" << endl;
        else
        {
        }
    }
}