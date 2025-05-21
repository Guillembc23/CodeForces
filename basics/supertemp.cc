#include <bits/stdc++.h>

#include <bitset>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
const int INF = 1e18;

// BIN SEARCH cridant binsearch(x,-1,n,a);

int binsearch(int x, int i, int j, vi &a) {
  if (i + 1 >= j)
    return i;
  else if (x < a[(i + j) / 2])
    return binsearch(x, i, (i + j) / 2, a);
  else
    return binsearch(x, (i + j) / 2, j, a);
}

// SEGMENT TREES (versio suma)

vi st(vi a) {
  int n = a.size();
  vi st(2 * n);
  for (int i = 0; i < n; i++) st[i + n] = a[i];
  for (int i = n - 1; i > 0; i--) st[i] = st[2 * i] + st[2 * i + 1];
  return st;
}

void updatest(int x, int y, vi &st) {
  int n = st.size() / 2;
  int h = x + n;
  st[h] = y;
  h /= 2;
  while (h > 0) {
    st[h] = st[2 * h] + st[2 * h + 1];
    h /= 2;
  }
}

int query(int l, int r, vi &st) {
  int n = st.size() / 2;
  int res = 0;
  l += n;
  r += n;
  while (l < r) {
    if (l % 2 == 1) {
      res += st[l];
      l++;
    }
    if (r % 2 == 0) {
      r--;
      res += st[r];
    }
    r /= 2;
    l /= 2;
  }
  return res;
}

// TRIE

const int AL = int('z') - int('a') + 1;

struct trienode {
  struct trienode *children[AL];
  bool end;
};

struct trienode *getNode(void)
{
    struct trienode *pNode =  new trienode;
    pNode->end = false;
    for (int i = 0; i < AL; i++)
        pNode->children[i] = NULL;
    return pNode;
}

void insert(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndOfWord = true;
}

bool search(struct TrieNode *root, string key)
{
    struct TrieNode *pCrawl = root;
 
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
    return (pCrawl->isEndOfWord);
}

// BFS

void bfs(int x, vvi &graph, vi &distance) {
  int n = graph.size();
  queue<int> q;
  vi visited(n, 0);
  distance = vi(n);
  q.push(x);
  distance[x] = 0;
  while (not q.empty()) {
    int y = q.front();
    // process verice y
    for (auto v : graph[y]) {
      if (visited[v] == 0) {
        q.push(v);
        visited[v] = 1;
        distance[v] = distance[y] + 1;
      }
    }
  }
}

// MENOR MES PROPER (versio menor o igual a l'esquerra)

void nearest(const vi &a, vi &b) {
  int n = a.size();
  b = vi(n);
  stack<pair<int, int>> s;
  pair<int, int> dumy;
  for (int i = 0; i < n; i++) {
    dumy.first = a[i];
    dumy.second = i;
    while (not s.empty() and s.top().first > a[i]) {
      s.pop();
    }
    if (s.empty())
      b[i] = -1;
    else
      b[i] = s.top().second;
    s.push(dumy);
  }
}

// KNAPSACK
int knap(vi a) {
  int n = a.size();
  bitset<int(1e9)> dp;
  dp.set(0);
  for (int i = 0; i < n; i++) dp |= dp << a[i];
  return dp.count();
}

void solve() {
  int n;
  cin >> n;
  vi a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vi b;
  nearest(a, b);
}

// MAX FLOW

bool ffbfs(vvi &rgraph, int s, int t, vi &parent) {
  int n = rgraph.size();
  vector<bool> visited(n, false);
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

int fordFulkerson(vvi &graph, int s, int t) {
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

// SCC

// Djistra

// Lazy ST

//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}