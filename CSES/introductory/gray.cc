#include <bits/stdc++.h>
#define endl "\n"
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define pb push_back
using namespace std;

int pow(int n) {
    return (1 << n);
}

vector<string> gray(int n) {
    int m = pow(n);
    vector<string> a(m);
    if (n == 0) return a;
    else {
        vector<string> b = gray(n-1);
        for (int i = 0; i < m/2; i++)
        {
            a[i] = b[i] + '0';
        }
        for (int i = 0; i < m/2; i++)
        {
            a[i+m/2] = b[m/2 - i - 1] + '1';
        }
        return a;
    }
}

signed main() {
    int n;
    cin >> n;
    vector<string> a = gray(n);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}