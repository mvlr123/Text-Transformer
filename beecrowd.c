#include <stdio.h>

int main() {
    int n, m, i, j, x, menor, maior, countMenor, countMaior, total;
    double percMenor, percMaior;

    scanf("%d %d", &n, &m);
    total = n * m;
    countMenor = 0;
    countMaior = 0;

    menor = 1001;
    maior = -1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &x);
            if (x < menor)
                menor = x;
            if (x > maior)
                maior = x;
        }
    }

    rewind(stdin);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &x);
            if (x == menor)
                countMenor++;
            if (x == maior)
                countMaior++;
        }
    }

    percMenor = 100.0 * countMenor / total;
    percMaior = 100.0 * countMaior / total;

    printf("%d %.2lf%%\n", menor, percMenor);
    printf("%d %.2lf%%\n", maior, percMaior);

    return 0;
}
