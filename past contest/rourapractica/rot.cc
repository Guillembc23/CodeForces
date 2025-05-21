#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

const long long P = 1e9 + 7;

int hashh (string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res *= 30;
        res += int(s[i])-int('a');
        res %= P;
    }
    return res;
}

long long exp(long long a, int b) {
    if (b == 0) return 1;
    else {
        return (a*exp(a,b-1))%P;
    }
}

int substring (string s, string l) {
    int k = l.size();
    long long J = exp(30,k-1);
    long long hash1 = hashh(s);
    long long hash2 = hashh(l);
    string ss = s+s;
    int found1 = -1;
    int found2 = -1;
    for (int i = 0; i+k < ss.size() ; i++)
    {

        if (hash1 == hash2) {
            if (found1 == -1) found1 = i;
            else if (found2 == -1) found2 = i;
        }
        long long sub = J*(int(ss[i]) - int('a'));
        sub %= P;
        sub *= (P-1);
        sub %= P;

        hash1 += sub;

        hash1 *= 30;
        hash1 += int(ss[i+k]) - int('a');
        hash1 %= P;
    }

    if (found1 != -1 and found2 != -1) {
        return found2-found1;
    }
    if (found1 != -1) {
        return s.size() ;
    }
    else return 0;
}

void solve() {
  string s;
  while (cin >> s) {
    string l;
    cin >> l;
    int r = substring(s,l);
    if (not r) cout << 0 << endl;
    else cout << s.size()/r << endl;
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