#include <stdio.h>

int main(void) {
  int s = 1;

  for (int i = 0; i < 10; i++) {
    printf(" -> %d", s - i);
  }
  return 0;
}