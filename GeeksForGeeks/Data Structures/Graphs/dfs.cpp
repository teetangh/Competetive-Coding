// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{

    void dfsUtil(int node, vector<int> adj[], vector<int> &visited, vector<int> &result)
    {
        visited[node] = 1;
        result.push_back(node);

        for (auto child : adj[node])
        {
            if (!visited[child])
                dfsUtil(child, adj, visited, result);
        }
    }

public:
    //Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        // Code here
        vector<int> visited(V + 1, 0);
        vector<int> result;

        for (int i = 0; i < V; i++)
            if (!visited[i])
                dfsUtil(i, adj, visited, result);

        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends