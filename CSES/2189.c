#include <stdio.h>

int main() {
  int x; scanf("%d",&x);
  while (x--) {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d",&x1, &y1, &x2, &y2, &x3, &y3);
    long res = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
    if (res > 0) printf("LEFT\n");
    else if (res < 0) printf("RIGHT\n");
    else printf("TOUCH\n");
  }
}