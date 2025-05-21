#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back


void print(vi &a) {
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve() {
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi pont(n-1);
    int ma = 0;
    for (int i = 0; i < n-1; i++)
    {
        ma = max(ma,a[i]);
        if (ma <= i+1) pont[i] = 0;
        else pont[i] = 1;
    }
    
    string s;
    cin >> s;
    vi disp(n-1,0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R') disp[i]++;
        else disp[i-1]++;
    }
    int trencats = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (pont[i] == 1 and disp[i] == 0) trencats++;
    }

    while (q--) {
        int j;
        cin >> j;
        j--;
        if (s[j] == 'R') {
            s[j] = 'L';
            if (pont[j-1] == 1 and disp[j-1] == 0) trencats--;
            if (pont[j] == 1 and disp[j] == 0) trencats--;
            disp[j-1]++;
            disp[j]--;
            if (pont[j-1] == 1 and disp[j-1] == 0) trencats++;
            if (pont[j] == 1 and disp[j] == 0) trencats++;
        } else {
            s[j] = 'R';
            if (pont[j-1] == 1 and disp[j-1] == 0) trencats--;
            if (pont[j] == 1 and disp[j] == 0) trencats--;
            disp[j-1]--;
            disp[j]++;
            if (pont[j-1] == 1 and disp[j-1] == 0) trencats++;
            if (pont[j] == 1 and disp[j] == 0) trencats++;
        }
        if (trencats == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
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
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}