#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

signed main () {
    int n;
    cin >> n;
    if (n == 1) cout << 1 << endl;
    else if (n < 4) cout << "NO SOLUTION" << endl;
    else {
        for (int i = 2; i <= n; i += 2)
        {
            if (i > 2) cout << " ";
            cout << i;
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout <<" " << i;
        }
        cout << endl;
    }
}