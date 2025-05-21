#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>

using namespace std;

int mod (int a, int b) {
    a %= b;
    if (a < 0) a += b;
    return a;
}

void solve () {
    int n, k , w , h;
    cin >> n >> k >> w >> h;
    string s;
    cin >> s;
    map<pair<int,int>,int> a;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U') {
            y++;
            y = mod(y,2*h);
        } else if(s[i] == 'D') {
            y--;
            y = mod(y,2*h);
        }else if(s[i] == 'L') {
            x--;
            x = mod(x,2*w);
        }else if(s[i] == 'R') {
            x++;
            x = mod(x,2*w);
        }
        a[{y,x}]++;
    }
    int sol = 0;
    int z = 0, t = 0;
    while (k--) {
        sol += a[{t,z}];
        t -= y;
        t = mod(t,2*h);
        z -= x;
        z = mod(z,2*w);
    }
    cout << sol << endl;
}

signed main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}