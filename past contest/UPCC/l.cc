#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long int ll;
//
//
//
 
int superdivide(int &n, int div) {
  int result = 0;
  while (n % div == 0) {
    n /= div;
    result++;
  }
  return result;
}
 
int max_valuation(int n) {
  int div = 3;
  int result = superdivide(n, 2);
  while (n > 1) {
    if (n % div == 0) {
      result = max(result, superdivide(n, div));
    } else {
      div += 2;
    }
  }
  return result;
}
 
int zero_digits(int n, int b) {
  int result = 0;
  if (n >= b) {
    result = zero_digits(n / b, b);
  }
  if (n % b == 0) {
    result++;
  }
  return result;
}
 
void solve() {
  int n;
  cin >> n;
 
  int top = max_valuation(n);
 
  double topb = pow(n, 1.0 / top);
 
  int result = top;
 
  vector<int> solution(0);
  int index1 = -1;
  int index2 = 0;
 
  int j = 2;
  while (j <= topb) {
    int k = zero_digits(n, j);
    if (k >= result) {
      index1++;
      solution.push_back(j);
    }
    if (k > result) {
      result = k;
      index2 = index1;
      topb = pow(n, 1.0 / result);
    }
    j++;
  }
 
  cout << result << " " << index1 - index2 + 1 << endl;
 
  for (int i = index2; i < index1; i++) {
    cout << solution[i] << " ";
  }
 
  cout << solution[index1] << endl;
 
}
 
//
//
//
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
 
  int tt = 1;
  cin >> tt;
 
  for (int t = 0; t < tt; t++) {
    solve();
  }
}