#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

ld dist(ld a, ld b, ld c, ld d) {
  return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

int main() {
  ld ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  ld x = dist(ax, ay, bx, by);
  ld y = dist(bx, by, cx, cy);
  ld z = dist(ax, ay, cx, cy);
  if ((x + y <= z) || (x + z <= y) || (z + y <= x)) {
    cout << "No\n";
    return 0;
  }
  if (x == y) { 
    cout << "Yes\n"; 
  } else {
    cout << "No\n";
  }
  return 0;
} 