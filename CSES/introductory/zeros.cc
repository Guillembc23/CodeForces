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
    int sol = 0;
    int p = 5;
    while (p <= n) {
        sol += n/p;
        p *= 5;
    }
    cout << sol << endl;
}