#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>

bool ffbfs(vvi &rgraph, int s, int t, vi &parent)
{
    int n = rgraph.size();
    vector<bool> visited(n,false);
    
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
 
    while (!q.empty()) {
        int u = q.front();
        q.pop();
 
        for (int v = 0; v < n; v++) {
            if (visited[v] == false and rgraph[u][v] > 0) {
                if (v == t) {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return false;
}

int fordFulkerson(vvi &graph, int s, int t)
{
    int n = graph.size();
    int u, v;
    vvi rgraph = graph;
    vi parent(n);
    int max_flow = 0; 

    while (ffbfs(rgraph, s, t, parent)) {
        int path_flow = 1e18;
        for (v = t; v != s; v = parent[v]) {
            u = parent[v];
            path_flow = min(path_flow, rgraph[u][v]);
        }
        for (v = t; v != s; v = parent[v]) {
            u = parent[v];
            rgraph[u][v] -= path_flow;
            rgraph[v][u] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}

int main () {
    
}