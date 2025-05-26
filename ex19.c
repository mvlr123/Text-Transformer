#include <stdio.h>
#include <string.h>

int main(){
    int n, contagem, i;
    char A[10000];
    char B[10000];
    
    scanf("%d", &n);
    getchar();
    
    if(n>100){
        return 0;
    }

    while(n--){
        contagem = 0;

        scanf("%s %s", A, B);

        int tamanho = strlen(A);
        for(i = 0; i<tamanho; i++){
            char cA = A[i];
            char cB = B[i];

            if(cA != cB && cA != 'z'){
                do{
                    cA = cA + 1;
                    contagem++;
                }while(cA!=cB && cA!= 'z');
            }if(cA!=cB && cA == 'z'){
                cA = 'a';
                contagem++;
                if(cA!=cB){
                    do{
                        cA = cA+1;
                        contagem++;
                    }while(cA!=cB);
                }
            }
        }
        printf("%d\n", contagem);

    }


    return 0;
}