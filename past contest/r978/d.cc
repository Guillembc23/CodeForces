#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int binsearch(int l, int r, vi &a) {
    if (l+1 >= r) return l;
    int mid = (l+r)/2;
    cout << "? " << r-1 << " " << mid << endl;
    int p;
    cin >> p;
    if (not(p = a[r-1] xor a[mid])) return binsearch(l,mid,a);
    else return binsearch(mid,r,a); 
}

void solve() {
    int n;
    cin >> n;
    vi a(n);
    a[0] = 0;
    for (int i = 0; i < n-1; i++)
    {
        cout << "? " << i << " " << i+1 << endl;
        int p;
        cin >> p;
        if (p) a[i+1] = a[i];
        else a[i+1] = (a[i]++)%2;
    }
    
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  cout.flush();
  int tt = 1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}