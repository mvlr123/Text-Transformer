#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, m, n, soma = 0;
    char resultado[20];
 
    while (1){
 
        scanf("%d", &m);
        scanf("%d", &n);
 
        if (m == 0 && n == 0){
            break;
        }
 
        soma = m + n;
 
        sprintf(resultado, "%d", soma);
 
        char sem_zeros[20];
        int j = 0;
 
        int tamanho = strlen(resultado);
        for (i = 0; i < tamanho; i++)
        {
            if (resultado[i] != '0')
            {
                sem_zeros[j++] = resultado[i];
            }
        }
        sem_zeros[j] = '\0';
 
        printf("%s\n", sem_zeros);
    }
    return 0;
}