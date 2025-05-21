#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;
const int AL = int('z') - int('a') + 1;

void generation(int n, string l, vi inf) {
  if (n > 0) {
    for (int i = 0; i < AL; i++) {
      if (inf[i] > 0) {
        l += char(i + int('a'));
        inf[i]--;
        generation(n - 1, l, inf);
        inf[i]++;
        l.pop_back();
      }
    }
  } else
    cout << l << endl;
}

long long int factorial(long long int n) {
    if (n == 0) return 1;
    else return n*factorial(n-1);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  vi inf(AL, 0);
  string s;
  cin >> s;
  
  for (int i = 0; i < s.size(); i++) {
    inf[int(s[i]) - int('a')]++;
  }
  long long int p = factorial(s.size());
  for (int i = 0; i < AL; i++) {
    p /= factorial(inf[i]);
    }
  string l;
  cout << p << endl;
  generation(s.size(),l,inf);
}