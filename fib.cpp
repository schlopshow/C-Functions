#include <cstdio>

int main() {
    int x = 0, y = 1, z = 0;

    do
    {
    z = x + y;
    printf("%d ", x);
    x = y;
    y = z;
  } while(x < 255);
    printf("\n");
  return 0;
}
