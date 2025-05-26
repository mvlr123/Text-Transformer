#include <stdio.h>
#include <string.h>
 
int main (){
    int N, i, j;
    char c;
    char texto[500];
    int resultado;
    scanf("%d", &N);
    getchar();
 
 
        for(i=0; i<N; i++){
            
            c = getchar();
            getchar();
 
            fgets(texto, 500, stdin);
 
            for(j=0; texto[j]!= '\0'; j++){
                if (texto[j]== '\n'){
                    texto[j] = '\0';
                    break;
                }
            }
 
 
 
            resultado = 0;
 
                for(j=0; j<strlen(texto); j++){
                    if(c == texto[j]){
                        printf("Caractere %c encontrado no indice %d da string.\n", c, j);
                        resultado = 1;
                        break;
                    }
                    }
                if (resultado == 0){
                    printf("Caractere %c nao encontrado.\n", c);
                } 
            }
 
 
        
 
    return 0;
}