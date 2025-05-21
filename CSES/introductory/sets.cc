#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

int ways(int n) {
    return n*(n-1);
}

signed main () {
    int n;
    cin >> n;
    if (n % 4 == 0) {
        cout << "YES" << endl;
        cout << n/2 << endl;
        cout << 1;
        for (int i = 5; i <= n; i += 4) cout << " "<< i;
        for (int i = 4; i <= n; i += 4) cout << " "<< i;
        cout << endl;
        cout << n/2 << endl;
        cout << 2;
        for (int i = 6; i <= n; i += 4) cout <<" " << i;
        for (int i = 3; i <= n; i += 4) cout << " "<< i;
    }
    else if (n % 4 == 3) {
        cout << "YES" << endl;
        cout << 2 + (n-3)/2 << endl;
        cout << "1 2";
        for (int i = 4; i <= n; i += 4) cout << " "<< i;
        for (int i = 7; i <= n; i += 4) cout << " "<< i;
        cout << endl;
        cout << 1 + (n-3)/2 << endl;
        cout << "3";
        for (int i = 5; i <= n; i += 4) cout << " "<< i;
        for (int i = 6; i <= n; i += 4) cout << " "<< i;
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}