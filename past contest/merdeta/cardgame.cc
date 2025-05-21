#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
typedef tuple<int, int, int> triplet;
const int MOD = 998244353;
//
//
//
bool comp1(triplet t1, triplet t2) { return get<1>(t1) > get<1>(t2); }

bool comp2(triplet t1, triplet t2) { return get<2>(t1) > get<2>(t2); }

int dfs(int v, vector<int> graph, int n, int m) {
  if (v == m + n) {
    return 0;
  } else if (v == n + m + 1) {
    return 2;
  } else {
    int x = graph[graph[v]];
    if (x == v) {
      return 1;
    } else {
      return dfs(x, graph, n, m);
    }
  }
}

int index1(int u, int v, vector<int> graph, int n, int m) {
  if (v - u > 1) {
    if (dfs((u + v) / 2, graph, n, m) > 0) {
      return index1(u, (u + v) / 2, graph, n, m);
    } else {
      return index1((u + v) / 2, v, graph, n, m);
    }
  } else {
    return v;
  }
}

int index2(int u, int v, vector<int> graph, int n, int m) {
  if (v - u > 1) {
    if (dfs((u + v) / 2, graph, n, m) > 1) {
      return index1(u, (u + v) / 2, graph, n, m);
    } else {
      return index1((u + v) / 2, v, graph, n, m);
    }
  } else {
    return v;
  }
}

void solve() {
  int n;
  cin >> n;

  vector<triplet> x(n);
  for (int i = 0; i < n; i++) {
    cin >> get<1>(x[i]);
  }
  for (int i = 0; i < n; i++) {
    cin >> get<2>(x[i]);
  }
  sort(x.begin(), x.end(), comp2);
  for (int i = 0; i < n; i++) {
    get<0>(x[i]) = i;
  }

  int m;
  cin >> m;

  vector<triplet> y(m);
  for (int i = 0; i < m; i++) {
    get<0>(y[i]) = i + n;
    cin >> get<1>(y[i]);
  }
  for (int i = 0; i < m; i++) {
    cin >> get<2>(y[i]);
  }

  vector<int> graph(n + m + 2);

  // fleches cap a baix

  sort(y.begin(), y.end(), comp1);

  int i = 0, j = 0, k = 0;

  while (i < n and get<2>(x[i]) >= get<1>(y[0])) {
    graph[get<0>(x[i])] = n + m;
    i++;
  }

  while (i < n) {
    while (j < m and get<2>(x[i]) < get<1>(y[j + 1])) {
      j++;
      if (get<2>(y[j]) > get<2>(y[k])) {
        k = j;
      }
    }

    graph[get<0>(x[i])] = get<0>(y[k]);
    i++;
  }

  // fleches cap a dalt

  sort(x.begin(), x.end(), comp1);
  sort(y.begin(), y.end(), comp2);

  i = 0;
  j = 0;
  k = 0;

  while (i < m and get<2>(y[i]) >= get<1>(x[0])) {
    graph[get<0>(y[i])] = n + m + 1;
    i++;
  }

  while (i < m) {
    while (j < n and get<2>(y[i]) < get<1>(x[j + 1])) {
      j++;
      if (get<2>(x[j]) > get<2>(x[k])) {
        k = j;
      }
    }

    graph[get<0>(y[i])] = get<0>(x[k]);
    i++;
  }

  graph[n + m] = n + m;
  graph[n + m + 1] = n + m + 1;

  int result1 = index1(-1, n, graph, n, m);
  int result2 = index2(-1, n , graph, n, m);

  cout << result1 << " " << result2 << endl;

  cout << result1 << " " << result2 - result1 << " " << n - result2 << endl;
}
//
//
//

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}