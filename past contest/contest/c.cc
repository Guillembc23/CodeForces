#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

int comp (int a, int b) {
  int count = 0;
  if (a > b) {
    while (a > b) {
      count++;
      b = b*b;
    }
    return count;
  } else {
    while (a <= b) {
      a = a*a;
      if(a <= b) count++;
    }
    return -count;
  }
}

void solve () {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int total = 0;
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
      if (a[i+1] == 1 or a[i] == 1) {
        if (a[i] != 1) {
          cout << -1 << endl;
          return;
        }
      } else {
      count += comp(a[i],a[i+1]);
      if (count < 0) count = 0;

      total += count;
      }
    }
    cout << total << endl;
}

signed main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}