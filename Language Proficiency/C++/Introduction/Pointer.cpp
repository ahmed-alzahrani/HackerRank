#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
  int newA = *a + *b;
  int newB = (abs(*a - *b));
  *a = newA;
  *b = newB;
    // Complete this function
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
