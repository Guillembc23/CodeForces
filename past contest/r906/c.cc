#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
const int MOD = 998244353;
//
//
//

void solve() {
  int n;
  cin >> n;
  deque<char> a;

  for (int i = 0; i < n; i++) {
    char x;
    cin >> x;
    a.push_back(x);
  }

  int count = 0;

  int k = a.size();

  vector<int> operations;

  int i = 0, j = k;

  while (k > 0 and count <= 300) {
    if (a.front() == '0' and a.back() == '0') {
      a.pop_front();
      a.push_back('0');
      count++;

      operations.push_back(j);

      i++;
      j++;

    } else if (a.front() == '1' and a.back() == '1') {
      a.pop_back();
      a.push_front('1');
      count++;

      operations.push_back(i);

      i++;
      j++;

    } else {
      a.pop_back();
      a.pop_front();

      i++;
      j--;

      k -= 2;
    }
  }

  if (count > 300) {
    cout << -1 << endl;
  } else {
    cout << count << endl;

    if (not operations.empty()) {
      cout << operations[0];
      for (int i = 1; i < operations.size(); i++) {
        cout << " " << operations[i];
      }
    }
    cout << endl;
  }
}
//
//
//

int main() {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);

  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}