#include <bits/stdc++.h>

using namespace std;

#define pi 3.14159265

int main(){
  ios::sync_with_stdio(0);
  int d, h, v, e;
  cin >> d >> h >> v >> e;
  double c = (((4 * v) * 1.0) / (pi * d * d)) - e;
  if(c <= 0){
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    double ans = (h * 1.0) / c;
    printf("%.5f\n", ans);
  }
  return 0;
}