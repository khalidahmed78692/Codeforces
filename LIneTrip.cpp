#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int ans = v[0];
        for (int i = 1; i < n; i++)
            ans = max(ans, v[i] - v[i - 1]);
        ans = max(ans, 2 * (x - v[n - 1]));
        cout << ans << endl;
    }
    return 0;
}