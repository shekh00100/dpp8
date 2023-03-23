#include <bits/stdc++.h>
using namespace std;
#define fr(i, a, n) for (int i = a; i < n; ++i)
#define freq(i, a, n) for (int i = a; i <= n; ++i)
#define pb push_back
const int M = 1e9 + 7;
#define elif else if
#define str string
#define input(data, x) \
    data x;            \
    cin >> x;
#define vec(x, l) vector<x> l;
#define input_1(data, x, y) \
    data x, y;              \
    cin >> x >> y;
#define input_2(data, x, y, z) \
    data x, y, z;              \
    cin >> x >> y >> z;
#define output(arr)    \
    for (auto x : arr) \
    {                  \
        cout << x << ; \
    }
#define vecinput(n)             \
    for (int i = 0; i < n; ++i) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.pb(x)                 \
    };
typedef long long ll;
int power(int a, int b)
{
    // Fast exponetiation
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans *= a;
        }
        a *= a;
        b >>= 1; // right shift
    }
    return ans;
}
void DFS(vector<int> adj[], int src, stack<int> &st, vector<bool> &vis)
{
    vis[src] = true;

    for (auto i : adj[src])
    {
        if (!vis[i])
        {
            DFS(adj, i, st, vis);
        }
    }
    st.push(src);
}
vector<int> topoSort(int V, vector<int> adj[])
{
    stack<int> st;
    vector<bool> visited(V, false);
    vector<int> ans;
    for (int i = 0; i < V; ++i)
    {
        if (!visited[i])
        {
            DFS(adj, i, st, visited);
        }
    }
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
void solve()
{
}
int main()
{
    int t = 1;
    // cin>>t;
    while (t-- > 0)
    {
        solve();
        cout << "\n";
    }
    return 0;
}