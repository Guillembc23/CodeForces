#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

const int MOD = 1e9+7;

bool comprovar(int r, int c, map<pair<int,int>,int> &M) {
    if (M.find({r+1,c}) != M.end() and M.find({r,c+1}) != M.end() and M.find({r+1,c+1}) != M.end()) return true;
    if (M.find({r+1,c}) != M.end() and M.find({r,c-1}) != M.end() and M.find({r+1,c-1}) != M.end()) return true;
    if (M.find({r-1,c}) != M.end() and M.find({r,c+1}) != M.end() and M.find({r-1,c+1}) != M.end()) return true;
    if (M.find({r-1,c}) != M.end() and M.find({r,c-1}) != M.end() and M.find({r-1,c-1}) != M.end()) return true;
    return false;
}

int fexp (int a, int b) {
    if (b == 0) return 1;
    else {
        int sol = fexp(a,b/2);
        sol = sol*sol;
        sol %= MOD;
        if (b % 2 == 1) sol *= a;
        sol %= MOD;
        return sol;
    }
}

void solve() {
map<pair<int,int>,int> M;
int n, m, k, q;
cin >> n >> m >> k >> q;
int graus = n + m - 1;
for (int i = 0; i < k; i++)
{
    int r, c, v;
    cin >> r >> c >> v;
    M[{r,c}] = v;
    if (not comprovar(r,c,M)) graus--;
}
cout << fexp(2,30*graus) << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}