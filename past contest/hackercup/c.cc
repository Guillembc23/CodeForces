#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

const int INF = 1e10;

void print (vi a) {
  for (auto u : a) {
    cout << u << " ";
  }
  cout << endl;
}

void solve () {
  int n, m, q;
  cin >> n >> m >> q;
  vector<set<int>> s(n,{INF});
  vi graph(n-1,0);
  vi a(n);
  vi aa(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i]--;
    aa[a[i]] = i;
  }
  
  vi b(m);
  for (int i = 0; i < m; i++)
  {
    cin >> b[i];
    b[i]--;
    s[b[i]].insert(i);
  }

  int correct = 0;
  for (int i = 0; i < n-1; i++)
  {
    int x = a[i];
    int y = a[i+1];
    if (*s[x].begin() <= *s[y].begin()) {
      graph[i] = 1;
      correct++;
    }
  }

  if (correct == n-1) cout << "YA" << endl;
  else cout << "TIDAK" << endl;



  while (q--) {
    int pos, slide;
    cin >> slide >> pos;
    pos--;
    slide--;
    int ppos1 = aa[b[slide]];
    int ppos2 = aa[pos];
    if (ppos1 > 0) {
      int x = a[ppos1-1];
      int y = a[ppos1];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos1-1] == 1) {
          graph[ppos1-1] = 0;
          correct--;
        }
      }
    } 
    if (ppos1 < n-1) {
      int x = a[ppos1];
      int y = a[ppos1+1];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos1] == 1) {
          graph[ppos1] = 0;
          correct--;
        }
      }
    }
    if (ppos2 > 0) {
      int x = a[ppos2-1];
      int y = a[ppos2];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos2-1] == 1) {
          graph[ppos2-1] = 0;
          correct--;
        }
      }
    } 
    if (ppos2 < n-1) {
      int x = a[ppos2];
      int y = a[ppos2+1];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos2] == 1) {
          graph[ppos2] = 0;
          correct--;
        }
      }
    }
    s[b[slide]].erase(slide);
    b[slide] = pos;
    s[b[slide]].insert(slide);
    if (ppos1 > 0) {
      int x = a[ppos1-1];
      int y = a[ppos1];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos1-1] == 0) {
          graph[ppos1-1] = 1;
          correct++;
        }
      }
    } 
    if (ppos1 < n-1) {
      int x = a[ppos1];
      int y = a[ppos1+1];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos1] == 0) {
          graph[ppos1] = 1;
          correct++;
        }
      }
    }
    if (ppos2 > 0) {
      int x = a[ppos2-1];
      int y = a[ppos2];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos2-1] == 0) {
          graph[ppos2-1] = 1;
          correct++;
        }
      }
    } 
    if (ppos2 < n-1) {
      int x = a[ppos2];
      int y = a[ppos2+1];
      if (*s[x].begin() <= *s[y].begin()){ 
        if (graph[ppos2] == 0) {
          graph[ppos2] = 1;
          correct++;
        }
      }
    }

    if (correct == n-1) cout << "YA" << endl;
    else cout << "TIDAK" << endl;
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  cin >> tt;
  for (int i = 1; i <= tt; i++)
  {
    solve();
  }
  
}