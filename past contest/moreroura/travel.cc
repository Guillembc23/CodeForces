#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

using namespace std;

#define po pair<double, double>
#define x first
#define y second

double dist(po a, po b) {
  return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double sol(po a, po b, po c, po d, double w, double t, double u) {
  double tl = dist(a, b) / w;
  double d1 = dist(a, c);
  double d2 = dist(a, d);
  double d3 = dist(c, b);
  double d4 = dist(d, b);
  double dt = dist(c,d);
  if (d2 < d1) {
    swap(d2, d1);
    swap(d3, d4);
  }
  double t1 = dt/t + d4/w;
  double t2 = d3/w;
  double pu = min(max((t2-t1)/u,0.0),1.0);
  double et = d1/w + pu*(t1+pu*u/2) + (1-pu)*(t2);
  return (min(tl,et));
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.setf(ios::fixed);
  cout.precision(4);
  po a, b, c, d;
  double w, t, u;
  while (cin >> a.x >> a.y) {
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cin >> d.x >> d.y;
    cin >> w >> t >> u;
    cout << sol(a,b,c,d,w,t,u) << " " << sol(b,a,c,d,w,t,u) << endl ;
  }
}