#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lli long long int

void topologicalSort(int node, vector<vector<pair<int, int>>> &adj, vector<bool> &visited, stack<int> &st)
{
    visited[node] = true;
    for (auto adj_node : adj[node])
    {
        int v = adj_node.first;
        if (!visited[v])
        {
            topologicalSort(v, adj, visited, st);
        }
    }
    st.push(node);
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> adj(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v, x, y;
        cin >> u >> v >> x >> y;
        if (x >= y)
        {
            if (u < v)
                swap(u, v);
            adj[u].push_back({v, x});
            cout << "u: " << u << " {v,x}: " << v << "," << x << endl;
        }
        else
        {
            if (v < u)
                swap(u, v);
            adj[v].push_back({u, y});
            cout << "v: " << v << " {u,y}: " << u << "," << y << endl;
        }
    }

    stack<int> st;
    vector<bool> visited(n + 1);
    for (int node = 1; node <= n; node++)
        if (!visited[node])
            topologicalSort(node, adj, visited, st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
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