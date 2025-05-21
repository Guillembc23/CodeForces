#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

void hanoi (int n, int a, int b, int c) {
    if (n == 1) {
        cout << a <<" "<< b << endl;
    } else {
        hanoi (n-1,a,c,b);
        cout << a << " "<< b << endl;
        hanoi(n-1,c,b,a);
    }
}

signed main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    hanoi (n, 1,3,2);
}