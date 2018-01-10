#include <bits/stdc++.h>

using namespace std;

int l[100010], r[100010];
int a[100010], sum = 0;

int main(){
   int n, rsum = 0, lsum = 0, sr = 0, sl = 0;
   scanf("%d", &n);
   for(int i = 0; i < n; i++){
      scanf("%d %d", &l[i], &r[i]);
      lsum += l[i];
      rsum += r[i];
   }
   a[0] = abs(lsum - rsum);
   sum = a[0];
   for(int i = 0; i < n; i++){
      sl = lsum - l[i] + r[i];
      sr = rsum - r[i] + l[i];
      a[i + 1] = abs(sl - sr);
      sum = max(sum, a[i + 1]);
   }
   for(int i = 0; i <= n; i++){
      if(sum == a[i]){
         return 0 * printf("%d", i);
      }
   }     
   return 0;
}