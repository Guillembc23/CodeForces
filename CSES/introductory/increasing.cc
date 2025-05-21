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
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int total = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i-1]) {
            total += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
    
    cout << total << endl;
}