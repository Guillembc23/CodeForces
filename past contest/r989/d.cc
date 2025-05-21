#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    int fi;
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1) fi = i;
        else S.insert(i);
    }
    int x = 0;
    int y = n-1;
    vector<pair<int,int>> sol;
    if (a[x] != 1 and a[y] != 1) {
        sol.pb({x,fi});
        swap(a[x],a[fi]);
        if (S.find(x) != S.end()) {
            S.erase(x);
        }
        S.insert(fi);
    }
    while (not S.empty()) {
        if (a[x] == 0) {
            if (S.find(x) != S.end()) {
                    S.erase(x);
            }
            x++;
        } else if (a[y] == 2) {
            if (S.find(y) != S.end()) {
                    S.erase(y);
            }
            y--;
        } else {
            if (a[x] == 1 and a[y] == 1) {
                int z = *S.begin();
                S.erase(z);
                if (a[z] == 0) {
                    sol.pb({x,z});
                    swap(a[x], a[z]);
                    x++;
                } else if (a[z] == 2) {
                    sol.pb({y,z});
                    swap(a[y], a[z]);
                    y--;
                }
            } else {
                sol.pb({x,y});
                swap(a[x],a[y]);
                if (S.find(x) != S.end()) {
                    S.erase(x);
                }
                if (S.find(y) != S.end()) {
                    S.erase(y);
                }
            }
        }
    }
    cout << sol.size() << endl;
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i].first+1 <<  " " << sol[i].second+1 << endl;
    }
}
//
//
//
 
signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
 
  int tt = 1;
  cin >> tt;
 
  for (int t = 0; t < tt; t++) {
    solve();
  }
}