#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;
const int MOD = 1e9 + 7;

int pow(int n) {
    if (n == 0) return 1;
    else if (n == 1) return 2;
    else return pow(n/2)*pow(n - n/2)%MOD;
}

signed main () {
    int n;
    cin >> n;
    cout << pow(n) << endl;
}