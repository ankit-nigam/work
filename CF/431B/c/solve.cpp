#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {  
  int n;
  scanf("%d", &n);
  if (n == 0) {
    return 0 * printf("a");
  }
  char c = 'a';
  int sum = 0, x = 1, diff = n;
  while (sum < n) {
    while ((x * (x + 1) / 2) <= diff) {
      x++;
    }
    for (int i = 0; i < x; i++) {
      cout << c;
    }
    c++;
    sum += (x * (x - 1)) / 2;
    diff = n - sum;
    x = 1;
  }
  return 0;
}