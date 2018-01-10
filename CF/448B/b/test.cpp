#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("in", "w", stdout);
  printf("100000 2 0\n");
  for (int i = 1; i <= 100000; i++) {
    int x = rand() % 2;
    printf("%d ", x + 1);
  }
  return 0;
}