#include <stdio.h>

int main() {

  int N;
  scanf("%d", &N);
  int M, C, d, n;
  int i = 0, j = 0;

  while (i < N) {

    scanf("%d %d", &M, &C);
    if (M < 1 || M > 100 || C < 1 || C > 200) {
      return 0;
    }
    int array[M][C];

    for (j = 0; j < M; j++) {
      for (n = 0; n < C; n++) {
        array[j][n] = 0;
      }
    }

    j = 0;
    while (j < C) {

      int h, a;
      scanf("%d", &a);
      h = a % M;
      for (n = 0; n < C; n++) {
        if (array[h][n] == 0) {
          array[h][n] = a;
          break;
        }
      }
      j++;
    }

    for (j = 0; j < M; j++) {

      printf("%d -> ", j);
      for (n = 0; n < C; n++) {
        if (array[j][n]) {
          printf("%d -> ", array[j][n]);
        }
      }
      printf("\\\n");
    }
    if (i < N - 1) {
      printf("\n");
    }
    i++;
  }

  return 0;
}
