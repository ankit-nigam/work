#include <bits/stdc++.h>

using namespace std;

char s[200010];
queue <int> qr, qd;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> s[i];
    if(s[i] == 'D'){
      qd.push(i);
    } else{
      qr.push(i);
    }
  }
  while(!qr.empty() && !qd.empty()){
    int d = qd.front();
    int r = qr.front();
    qd.pop();
    qr.pop();
    if(r > d){
      qd.push(d + n);
    } else{
      qr.push(r + n);
    }
  }
  if(qr.empty()){
    cout << "D" << endl;
  } else{
    cout << "R" << endl;
  }
  return 0;
}