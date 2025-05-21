#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define vi vector<int>
#define vvi vector<vi>
#define vs vector<string>

typedef long long int ll;
const int MOD = 998244353;

//
//
//
vi converter(string s) {
  int n = s.size();
  vi sol;

  for (int i = 0; i < n; i++) {
    if (i < n - 1 and s[i + 1] == '#') {
      sol.push_back(int(s[i]) - int('A') + 7);
      i++;
    } else {
      sol.push_back(int(s[i]) - int('A'));
    }
  }

  return sol;
}

int comp(vi s1, vi s2) {
  int n = s1.size();
  int m = s2.size();
  int i = 0;
  int j = 0;
  while (i < n) {
    if (s1[i] == s2[j]) {
      j++;
    } else {
      j = 0;
    }
    i++;
  }

  return j;
}

int query(vi s1, vi s2) {
    return s1.size() + s2.size() - max(comp (s1,s2), comp (s2,s1));
}

void solve() {
  int n;
  cin >> n;
  string s;
  vvi conv;
  for (int i = 0; i < n; i++) {
    cin >> s;
    conv.push_back(converter(s));
  }

  int q;
  cin >> q;
  int x, y;
  for (int i = 0; i < q; i++)
  {
    cin >> x >> y;
    cout << query(conv[x - 1], conv[y - 1]) << endl;
  }
}
//
//
//

int main() {
ios_base::sync_with_stdio(0);
 cin.tie(0);

  int tt = 1;
  // cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}