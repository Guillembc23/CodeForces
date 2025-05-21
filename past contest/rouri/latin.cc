#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

bool vowel (char a) {
    return a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u';
}

bool vowell (char a) {
    return a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u' or a == 'y';
}

string codify(string s) {
    if (vowel(s[0])) return s +"yay";
    string l, r;
    bool found = false;
    r += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (vowell(s[i]) ){
            found = true;
        }
        if (not found) {
            r = r + s[i];
        } else {
            l = l + s[i];
        }
    }
    if (found) return l+r+"ay";
    else return s;
}


void solve() {
  string s;
  bool fi = true;;
  while (cin >> s) {
    if (s == ".") {
        cout << endl;
        fi = true;
    } else {
        if (fi) fi = false;
        else cout << " ";
        cout << codify(s);
    }
  }
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    solve();
  }
}