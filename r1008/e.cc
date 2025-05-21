#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const string SASK1 = "101010101010101010101010101010";
const string SASK2 = "010101010101010101010101010101";

int binarytoint( string s) {
    int sol = 0;
    for (int i = 0; i < s.size() ; i++)
    {
        sol *= 2;
        if(s[i] == '1') {
            sol += 1;
        }
    }
    return sol;
}


const int ASK1 = binarytoint(SASK1);
const int ASK2 = binarytoint(SASK2);

void solve() {
    int sol1,sol2;

    cout << ASK1 << endl;
    cin >> sol1;
    sol1 -= 2*ASK1;

    cout << ASK2 << endl;
    cin >> sol2;
    sol2 -= 2*ASK2;
    sol2 /= 2;

    string sx(30,'0'), sy(30,'0');
    for (int i = 0; i < 15; i++)
    {
        if (sol1 % 4 == 0) {
            sx[29-2*i] = '0';
            sy[29-2*i] = '0';
        } else if (sol1 % 4 == 1) {
            sx[29-2*i] = '0';
            sy[29-2*i] = '1';
        } else {
            sx[29-2*i] = '1';
            sy[29-2*i] = '1';

        }

        if (sol2 % 4 == 0) {
            sx[28-2*i] = '0';
            sy[28-2*i] = '0';
        } else if (sol2 % 4 == 1) {
            sx[28-2*i] = '0';
            sy[28-2*i] = '1';
        } else {
            sx[28-2*i] = '1';
            sy[28-2*i] = '1';
        }

        sol1 /= 4;
        sol2 /= 4;
    }

    cout << "!" << endl;
    
    int m;
    cin >> m;
    cout << (binarytoint(sx) | m) + (binarytoint(sy) | m) << endl;
}
//
//
//

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);


  int tt = 1;
  cin >> tt;

  for (int t = 0; t < tt; t++) {
    solve();
  }
}