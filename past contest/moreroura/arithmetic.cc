#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define int long long

using namespace std;

int exp(int a, int b) {
    if (b == 0) return 1;
    else return exp(a,b-1)*a;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(2);
  vi p = {2,3,5,7,11,13};
  for (int i = 0; i < 6; i++)
  {
    p[i] = exp(p[i],p[i]);
  }
  
  int n, m;
  while (cin >> n >> m) {
    int many = 0;
    for (int i = 0; i < 6; i++)
    {
        if (n <= p[i] and p[i] <= m) many++;
    }
    if(n == 0) many++;
    cout << many << endl;
  }
}