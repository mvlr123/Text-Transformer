#include <stdio.h>

int main(){
    int n, i;
    scanf("%d", &n);

    int numero[n];

    for(i = 0; i < n; i++){
        scanf("%d", &numero[i]);
    }
    printf("%d\n", numero[0]);

    for(i = 1; i < n; i++){
        if(numero[i] != numero[i - 1]){
            printf("%d\n", numero[i]);
        }
    }

    return 0;
}
