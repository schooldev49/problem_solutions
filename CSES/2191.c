#include <stdio.h>

int main() {
  int n;scanf("%d",&n);
  int x[n], y[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d%d",&x[i], &y[i]);
  }
  long long res = 0;
  for (int i = 0; i < n; i++){
        res += (x[i]*y[(i+1)%n] - x[(i+1)%n]*y[i]);
    }
  printf("%lld\n",res > 0 ? res : res * -1);
}