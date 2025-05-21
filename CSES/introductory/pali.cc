#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;
const int AL = int('Z') - int('A') + 1;

signed main() {
  vi a(AL, 0);
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    a[int(s[i]) - int('A')]++;
  }
  string s1, s2, s3;
  for (int i = 0; i < AL; i++) {
    char c = char(int('A') + i);
    while (a[i] > 1) {
      s1 += c;
      a[i] -= 2;
    }
    if (a[i] > 0) s2 += c;
  }
  if (s2.size() < 2) {
    for (int i = 0; i < s1.size(); i++)
    {
        s3 += s1[s1.size() - i - 1];
    }
    cout << s1 << s2 << s3 << endl;
  } else {
    cout << "NO SOLUTION" << endl;
  }
}