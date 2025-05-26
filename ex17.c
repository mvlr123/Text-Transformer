#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char letra;
    char frase[50000];
    
    while(fgets(frase, 50000, stdin) != NULL){
        for(i = 0; frase[i]!= '\0'; i++){
        for(i = 0; frase[i]!= ' '; i++){
            if((frase[i]>='A' && frase[i]<= 'Z')||(frase[i]>='a' && frase[i]<='z')){
                letra = frase[i]
            }

        }

        }
    }



    return 0;
}