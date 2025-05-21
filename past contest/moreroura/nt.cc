#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

int perfila(int mod, int m) {
    int sol = 0;
  if (mod == 0) {
    sol += 3*m/4;
    if (m % 4 == 0) {
        sol += 0;
    } else if (m % 4 == 1) {
        sol += 1;
    }else if (m % 4 == 2) {
        sol += 2;
    }else{
        sol += 2;
    }
  } else if (mod == 1) {
    sol += m/4;
    if (m % 4 == 0) {
        sol += 0;
    } else if (m % 4 == 1) {
        sol += 1;
    }else if (m % 4 == 2) {
        sol += 1;
    }else{
        sol += 1;
    }
  } else if (mod == 2) {
    sol += m/4;
    if (m % 4 == 0) {
        sol += 0;
    } else if (m % 4 == 1) {
        sol += 0;
    }else if (m % 4 == 2) {
        sol += 0;
    }else{
        sol += 1;
    }
  } else if (mod == 3) {
    sol += 3*m/4;
    if (m % 4 == 0) {
        sol += 0;
    } else if (m % 4 == 1) {
        sol += 0;
    }else if (m % 4 == 2) {
        sol += 1;
    }else{
        sol += 2;
    }
  } else if (mod == 4) {
    sol += m/4;
    if (m % 4 == 0) {
        sol += 0;
    } else if (m % 4 == 1) {
        sol += 0;
    }else if (m % 4 == 2) {
        sol += 0;
    }else{
        sol += 1;
    }
  } else {
    sol += m/4;
    if (m % 4 == 0) {
        sol += 0;
    } else if (m % 4 == 1) {
        sol += 1;
    }else if (m % 4 == 2) {
        sol += 1;
    }else{
        sol += 1;
    }
  }
  return sol;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  while (cin >> n >> m) {
    if (n > m) swap(n, m);
    int res = 0;
    res += ((n+5)/6)*perfila(0,m);
    res += ((n+4)/6)*perfila(1,m);
    res += ((n+3)/6)*perfila(2,m);
    res += ((n+2)/6)*perfila(3,m);
    res += ((n+1)/6)*perfila(4,m);
    res += ((n)/6)*perfila(5,m);
    if (n == 1) res = m;
    cout << res << endl;
  }
}