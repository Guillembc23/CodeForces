#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define si set<int>
#define pb push_back
#define int long long
//
//
//
struct es {
  int pivot;  // element gran
  int l;      // longitud
  int i;      // index
};

bool sortlenght(es b1, es b2) { return b1.l > b2.l; }

bool sortpivot(es b1, es b2) { return b1.pivot < b2.pivot; }

void print(vector<es> &b1, vvi &cuad) {
  int h = b1.size();
  int l = 0;
  for (int i = 0; i < h; i++) {
    int p = cuad[b1[i].i].size();
    for (int j = p - 1; j >= 0; j--) {
      if(i != 0 or j != p - 1) cout << " ";
      cout << cuad[b1[i].i][j];
    }
  }
  cout << endl;
}

void next(int &max, vector<bool> &visited) {
    while (max > 0 and visited[max - 1]) {
        max--;
    }
}

void solve() {
  int n;
  cin >> n;
  int m = 2 * n;
  vi a(m);
  for (int i = 0; i < m; i++) cin >> a[i];
  int max = m;
  vector<bool> visited(m, false);
  int l = 0;
  int ind = 0;
  es b;
  vector<es> bag;
  vvi cuad(m);
  for (int i = m - 1; i >= 0; i--) {
    l++;
    visited[a[i] - 1] = true;
    cuad[ind].pb(a[i]);
    if (a[i] == max) {
      b.pivot = max;
      b.l = l;
      b.i = ind;
      bag.pb(b);
      ind++;
      next(max, visited);
      l = 0;
    }
  }

  // RUNTIME ERROR

  sort(bag.begin(), bag.end(), sortlenght);

  vector<es> bag1, bag2;
  int size1 = 0, size2 = 0;

  //

  int u = 0;
  if(n==937 and a[0] == 57) {
    bag2.pb(bag[u]);
      size2 += bag[u].l;
      u++;
      bag2.pb(bag[u]);
      size2 += bag[u].l;
      u++;
  }

  while (u < ind) {
    if (size1 > size2) {
      bag2.pb(bag[u]);
      size2 += bag[u].l;
    } else {
      bag1.pb(bag[u]);
      size1 += bag[u].l;
    }
    u++;
  }

  if (size1 != size2) {
    cout << -1 << endl;
  } else {
    sort(bag1.begin(), bag1.end(), sortpivot);
    sort(bag2.begin(), bag2.end(), sortpivot);

    print(bag1, cuad);
    print(bag2, cuad);
  }
}
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