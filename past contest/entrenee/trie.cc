#include <bits/stdc++.h>
#define vi vector<int>
#define vvi vector<vi>
using namespace std;

class Trie {
 public:
  static const int ALPHABET = int('z') - int('a') + 1;

  char let;
  int many;
  bool end;
  vector<Trie *> next;

  static int index(char a) { return int(a) - int('a'); }

  static char lett(int a) { return char(a + int('a')); }

  Trie() {
    let = ' ';
    many = 0;
    end = false;
    next = vector<Trie *>(ALPHABET, NULL);
  }

  Trie(int a) {
    let = lett(a);
    many = 0;
    end = false;
    next = vector<Trie *>(ALPHABET, NULL);
  }

  ~Trie() {
    for (int i = 0; i < ALPHABET; i++)
    {
      delete next[i];
    }
  }

  bool in(string &s) {
    if (s.empty()) {
      return end;
    }

    int i = index(s.back());
    if (next[i] == NULL) return false;
    s.pop_back();
    return next[i]->in(s);
  }

  bool cin(string s) { return in(s); }

  void insert(string &s) {
    many++;
    if (s.empty()) {
      end = true;
      return;
    }

    int i = index(s.back());
    if (next[i] == NULL) {
      next[i] = new Trie(i);
    }
    s.pop_back();
    next[i]->insert(s);
  }

  void cinsert(string s) {
    if (cin(s)) return;
    insert(s);
  }

  void erase(string &s) {
    many--;
    if (s.empty()) {
      end = false;
      return;
    } else {
      int i = index(s.back());
      s.pop_back();
      next[i]->erase(s);
      if (next[i]->many == 0) {
        delete next[i];
        next[i] = NULL;
      }
    }
  }

  void cerase(string &s) {
    if (not cin(s)) return;
    erase(s);
  }

  int count(string &s) {
    if (s.empty()) return many;

    int i = index(s.back());
    s.pop_back();
    if (next[i] == NULL) return 0;
    return next[i]->count(s);
  }

  int ccount(string s) { return count(s); }

  void reset() {
    many = 0;
    end = false;
    for(int i = 0; i < ALPHABET; i++) {
      delete next[i];
      next[i] = NULL;
    }
  }
};

void solve() {
  string op, s;
  Trie t;
  while (cin >> op) {
    if (op == "I") {
      cin >> s;
      t.cinsert(s);
    } else if (op == "E") {
      cin >> s;
      t.cerase(s);
    } else if (op == "C") {
      cin >> s;
      cout << t.ccount(s) << endl;
    } else {
      cout << "---" << endl;
      t.reset();
    }
  }
}

signed main() {
  cout.setf(ios::fixed);
  cout.precision(0);
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);

  int tt = 1;
  // cin >> tt;
  while (tt--) {
    solve();
  }
}