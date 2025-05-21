#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;
const int MOD = 998244353;



int exp (int a, int b) {
    if (b == 0) return 1;
    else if (b == 1) return a;
    else {
        return exp(a,b/2)*exp(a,b-b/2)%2;
    }
}

int inverse (int n) {
    return exp(n,MOD-2);
}

int choose(int n, int m) {
    int res = 0;
    while (m > 0) {
        res *= n;
        res %= MOD;
        res *= inverse(m);
        res %= MOD;
        n--;
        m--;
    }
    return res;
}

int pas (int m) {
    return exp(2,m) - 2;
}

int ways (int n,int k) {
    int m = gcd(n, k);
    int sol = 0;
    for (int i = 0; i <= m; i++)
    {
        cout << "going" << endl;
        int x = 1 + i;
        x *= choose(m,i);
        x %= MOD;
        x *= exp(pas(n/m),m-i);
        sol += x;
        sol %= MOD;
        cout << "nice" << endl;
    }
    return sol;
}


signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  cout << ways(n,k) << endl;
}