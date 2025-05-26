#include <stdio.h>

int main() {
    int ta, tb;
    int i, j, n;
    
    do {
        scanf("%d", &ta);
    } while (ta < 1 || ta > 100);
    
    do {
        scanf("%d", &tb);
    } while (tb < 1 || tb > 100);

    int a[100], b[100];
    

    i = 0;
    while (i < ta) {
        scanf("%d", &n);
        int repete = 1;
        for (j = 0; j < i; j++) {
            if (a[j] == n) {
                repete = 0;
                break;
            }
        }
        if (repete) {
            a[i] = n;
            i++;
        }
    }

    i = 0;
    while (i < tb) {
        scanf("%d", &n);
        int repete = 1;
        for (j = 0; j < i; j++) {
            if (b[j] == n) {
                repete = 0;
                break;
            }
        }
        if (repete) {
            b[i] = n;
            i++;
        }
    }

    printf("(");
    for (i = 0; i < ta; i++) {
        if (i > 0) printf(",");
        printf("%d", a[i]);
    }
    printf(")\n");

    printf("(");
    for (i = 0; i < tb; i++) {
        if (i > 0) printf(",");
        printf("%d", b[i]);
    }
    printf(")\n");

    printf("(");
    int primeiro = 0;
    for (i = 0; i < ta; i++) {
        int achou = 1;
        for (j = 0; j < tb; j++) {
            if (a[i] == b[j]) {
                achou = 0;
                break;
            }
        }
        if (achou) {
            if (primeiro) printf(",");
            printf("%d", a[i]);
            primeiro = 1;
        }
    }
    printf(")\n");

    printf("(");
    primeiro = 0;
    for (i = 0; i < ta; i++) {
        for (j = 0; j < tb; j++) {
            if (primeiro) printf(",");
            printf("(%dx%d)", a[i], b[j]);
            primeiro = 1;
        }
    }
    printf(")\n");

    return 0;
}
