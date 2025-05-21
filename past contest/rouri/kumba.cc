#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

bool type1(char a) {
    if (a == '1') return true;
    return false;
}

bool type2(char a) {
    if (a == '1') return true;
    if (a == '2') return true;
    if (a == '4') return true;
    if (a == '8') return true;
    return false;
}

bool type3(char a) {
    if (a == '1') return true;
    if (a == '3') return true;
    if (a == '9') return true;
    return false;
}
bool type23(char a) {
    if (a == '1') return true;
    if (a == '2') return true;
    if (a == '3') return true;
    if (a == '4') return true;
    if (a == '6') return true;
    if (a == '8') return true;
    if (a == '9') return true;
    return false;
}


char floor1(char a) {
    return '1';
}

char floor2(char a) {
    if (a == '1') return '1';
    if (a == '2') return '2';
    if (a == '3') return '2';
    if (a == '4') return '4';
    if (a == '5') return '4';
    if (a == '6') return '4';
    if (a == '7') return '4';
    if (a == '8') return '8';
    if (a == '9') return '8';
    else return '0';
}
char floor2(char a) {
    if (a == '1') return '1';
    if (a == '2') return '1';
    if (a == '3') return '3';
    if (a == '4') return '3';
    if (a == '5') return '3';
    if (a == '6') return '3';
    if (a == '7') return '3';
    if (a == '8') return '3';
    if (a == '9') return '9';
    else return '0';
}
char floor2(char a) {
    if (a == '1') return '1';
    if (a == '2') return '2';
    if (a == '3') return '2';
    if (a == '4') return '4';
    if (a == '5') return '4';
    if (a == '6') return '6';
    if (a == '7') return '6';
    if (a == '8') return '8';
    if (a == '9') return '9';
    else return '0';
}

string conv1(string s) {
    bool found = false;
    bool zero = false;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i] == '0') zero = true;
        if (found) s[i] = '1';
        else {
            if (not type1(s[i])) {
                s[i] = floor1(s[i]);
                found = true;
            }
        }
    }
    if (zero) {
        string l;
        for (int i = 0; i < s.size()-1; i++) l += '1';
    }
    return s;
}

string conv2(string s) {
    bool found = false;
    bool zero = false;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i] == '0') zero = true;
        if (found) s[i] = '8';
        else {
            if (not type2(s[i])) {
                s[i] = floor2(s[i]);
                found = true;
            }
        }
    }
    if (zero) {
        string l;
        for (int i = 0; i < s.size()-1; i++) l += '8';
    }
    return s;
}

string conv3(string s) {
    bool found = false;
    bool zero = false;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i] == '0') zero = true;
        if (found) s[i] = 1;
        else {
            if (not type1(s[i])) {
                s[i] = floor1(s[i]);
                found = true;
            }
        }
    }
    if (zero) {
        string l;
        for (int i = 0; i < s.size()-1; i++) l += '1';
    }
    return s;
}

string conv23(string s) {
    bool found = false;
    bool zero = false;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i] == '0') zero = true;
        if (found) s[i] = 1;
        else {
            if (not type1(s[i])) {
                s[i] = floor1(s[i]);
                found = true;
            }
        }
    }
    if (zero) {
        string l;
        for (int i = 0; i < s.size()-1; i++) l += '1';
    }
    return s;
}

int num2(char a) {
    if (a == '1') return 0;
    if (a == '2') return 1;
    if (a == '4') return 2;
    if (a == '8') return 3;
    return false;
}

int num3(char a) {
    if (a == '1') return 0;
    if (a == '3') return 1;
    if (a == '9') return 2;
    return false;
}

int num23(char a) {
    if (a == '1') return 0;
    if (a == '2') return 1;
    if (a == '3') return 2;
    if (a == '4') return 3;
    if (a == '6') return 4;
    if (a == '8') return 5;
    if (a == '9') return 6;
    return false;
}

int calc2 (string s) {
    int res = 0;
    for (int i = s.size()-1; i >= 0; i--)
    {
        res *= 4;
        res += num2(s[i]);
    }
    return res;
}

int calc3 (string s) {
    int res = 0;
    for (int i = s.size()-1; i >= 0; i--)
    {
        res *= 3;
        res += num3(s[i]);
    }
    return res;
}

int calc23 (string s) {
    int res = 0;
    for (int i = s.size()-1; i >= 0; i--)
    {
        res *= 7;
        res += num23(s[i]);
    }
    return res;
}

void solve() {
    string n, m;
    while (cin >> m >> n) {
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