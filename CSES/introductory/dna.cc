#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

signed main() {
  string s;
  cin >> s;
  int count = 1;
  int maxi = 0;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1])
      count++;
    else {
    maxi = max(count,maxi);
      count = 1;
    }
  }
  maxi = max(count,maxi);
  cout << maxi << endl;
}