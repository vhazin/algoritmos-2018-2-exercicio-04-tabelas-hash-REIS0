#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node * next;
} node;

typedef struct lista {
  struct node * begin;
  struct node * end;
} lista;


lista * createlist();
int insert(lista * LISTA, int value);
void display(lista * LISTA);


int main(void) {

  int N;
  scanf("%d", &N);
  int cases[N];

  int i = 0, j = 0;
  while (j < N) {

    int M;
    int C;
    scanf("%d %d", &M, &C);
    if (M > 100 || C > 100) {
      return 0;
    }
    int * ende[M];
    int keys[C];

    while (i != M && scanf("%d", &keys[i]) == 1) {
      int h;
      h = i % 13;
      lista * ende[i] = createlist();
      if (h < M) {
        insert(ende[i], h);
      }else {
        continue;
      }
    }
    cases[j] = ende;
    j++;
  }

  for (j = 0; j < N; j++) {
    for (size_t i = 0; i < ; i++) {
      printf("%d -> ", i);
      display(cases[j][i]);
    }
    printf("\n");
  }

  return 0;
}


lista * createlist() {

  lista * head;
  head = (lista*)malloc(sizeof(lista));

  if (head != NULL) {
    head->begin = NULL;
  }

  return head;
}


int insert(lista * LISTA, int value) {

  node * new;
  new = (node*)malloc(sizeof(node));
  new->val = value;
  new->next = NULL;

  if (new == NULL) {
    return 0;
  }else if (LISTA->begin == NULL) {
    LISTA->begin = new;
  }else {
    LISTA->end->next = new;
    LISTA-> = new;
  }
  return 1;
}


void display(lista * LISTA) {

  node * p = LISTA->begin;
  while (p != NULL) {
    printf("%d -> ", p->val);
  }
  printf("\\n");
}
