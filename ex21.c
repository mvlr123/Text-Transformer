#include <stdio.h>
#include <string.h>
int main(){
    int n, i, j, k, l, maior;
    char frase[200];
    int letra;

    scanf("%d", &n);
    getchar();

    for(i=0; i<n;i++){
        maior = 0;
        int freq[128] = {0};
        fgets(frase, 200, stdin);
        for(j=0; frase[j]!= '\0'; j++){
                if (frase[j]== '\n'){
                    frase[j] = '\0';
                    break;
                }
            }

        int tamanho = strlen(frase);
        for(k=0; k<tamanho; k++){
            if(frase[k]< 'A' || frase[k]>'z'){
                continue;
            }else{
                if(frase[k]>='A' && frase[k]<='Z'){
                    frase[k] = frase[k] + 32;
                }else{}
                letra = frase[k]; 
                freq[letra]++;
            }
        }
        for(l=97; l<=122; l++){
            if(freq[l]>maior){
                maior = freq[l];
            }
        }for(l = 97; l<=122; l++){
            if(freq[l]>=maior){
                printf("%c", l);
            }
        }
        printf("\n");
        
        
    
    }


    return 0;
}