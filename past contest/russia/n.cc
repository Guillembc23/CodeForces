#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

// comproves >=
bool comprovar (int k, vi &c) {
    for (int i = 0; i < c.size() ; i++)
    {
        if (c[i] != -1)
        {
            if (round(1.0*k/(i+1) )< c[i]) return false;
        } 
    }
    return true;
}

int binsearch (int l, int r, vi &c) {
    if (l + 1 >= r) return r;
    int m = (l+r)/2;
    if (comprovar(m,c)) return binsearch(l,m,c);
    else return binsearch(m,r,c);
}

void solve() {
    int n;
    cin >> n;
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "?") c[i] = -1;
        else c[i] = stoi(s);
    }
    cout << binsearch(0,1e10,c) << endl;
}




signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(7);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
  
}