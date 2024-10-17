class Solution
{
public:
    void dfs(int i, vector<bool> &mark, vector<vector<int>> &connect, int &a, int &b)
    {
        if (mark[i])
            return;

        mark[i] = true;
        ++a;                    // Increase the node count in the current component
        b += connect[i].size(); // Add the number of edges from node i (degree of node i)

        for (int child : connect[i])
        {
            dfs(child, mark, connect, a, b); // Recursively visit all connected nodes
        }
    }

    int countCompleteComponents(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> connect(n); // Adjacency list for the graph

        // Step 1: Build the graph from the edge list
        for (const auto &e : edges)
        {
            connect[e[0]].push_back(e[1]);
            connect[e[1]].push_back(e[0]);
        }

        int cnt = 0;          // Count of complete components
        vector<bool> mark(n); // Visited array to track if nodes have been visited

        // Step 2: Traverse all nodes
        for (int i = 0; i < n; i++)
        {
            if (mark[i])
                continue; // Skip already visited nodes

            // Step 3: Explore a new connected component
            int a = 0; // To count the number of nodes in the current component
            int b = 0; // To count the total number of edges (considered twice)

            // DFS to visit all nodes in this component
            dfs(i, mark, connect, a, b);

            // Step 4: Check if the component is a complete subgraph
            cnt += a * (a - 1) == b; // Increment if the component is complete
        }
        return cnt; // Return the number of complete components
    }
};
