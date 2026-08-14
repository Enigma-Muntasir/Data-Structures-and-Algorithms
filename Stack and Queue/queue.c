#include <stdio.h>

#define rr s, &i, &top

void push(int *s, int *i, int *top, int v) {
    s[(*i)] = v;
    (*i)++;
}

void pop(int *s, int *i, int *top) {
    (*top)++;
}

void peek(int *s, int *i, int *top) {
    printf("%d\n", s[(*top)]);
}

void isEmpty(int *s, int *i, int *top) {
    ((*i) == (*top)) ? printf("Empty\n") : printf("There's data\n");
}

void clearQueue(int *s, int *i, int *top) {
    (*i) = 0;
    (*top) = 0;
}

void size(int *s, int *i, int *top) {
    printf("%d\n", (*i) - (*top));
}

int main() {
    int s[5];
    int i = 0, top = 0;

    push(rr, 0);
    push(rr, 1);
    pop(rr);
    peek(rr);
    push(rr, 2);
    push(rr, 3);

    size(rr);
    printf("%d\n", i);

    while (i > 0) {
        i--;
        printf("%d ", s[i]);
    }

    return 0;
}