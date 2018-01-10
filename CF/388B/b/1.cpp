#include <bits/stdc++.h>  

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  int x[3], y[3], k = 0;
  for(int i = 0; i < 3; i++){
    cin >> x[i] >> y[i];
  }
  cout << 3 << endl;
  cout << x[2] + x[1] - x[0] << " " << y[2] + y[1] - y[0] << endl;
  cout << x[0] + x[1] - x[2] << " " << y[0] + y[1] - y[2] << endl;
  cout << x[2] + x[0] - x[1] << " " << y[2] + y[0] - y[1] << endl;
  return 0;
}
