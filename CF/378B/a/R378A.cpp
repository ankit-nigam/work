#include <bits/stdc++.h>

using namespace std;

char v[] = {'A', 'E', 'I', 'O', 'U', 'Y'};
vector <int> a;

int main(){
   string s;
   cin >> s;
   int ans = 0;
   a.push_back(0);
   for(int i = 0; i < s.size(); i++){
      bool yes = false;
      for(int j = 0; j < 6; j++){
         if(s[i] == v[j]){
            yes = true;
            break;
         }
      }
      if(yes){
         a.push_back(i + 1);
      }
   }
   a.push_back(s.size() + 1);
   for(int i = 0; i < a.size() - 1; i++){
      ans = max(ans, a[i + 1] - a[i]);
   }
   printf("%d", ans);
   return 0;
}