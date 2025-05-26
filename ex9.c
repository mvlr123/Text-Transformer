#include <stdio.h>
#include <string.h>

int main(){
    int n, i;
    char texto[1000];
    char passo1[1000];
    int j;
    char passo2[1000];
    int k;
    char criptografia[1000];
    int l;

    scanf("%d", &n);
    getchar();
        if(n>=1 && n<=10000){
    while(n--){
        j=0;
        k=0;
        

        fgets(texto, 1000, stdin);

        for (i = 0; texto[i] != '\0'; i++) {
            if (texto[i] == '\n') {
                texto[i] = '\0';
                break;
            }
        }

        for(i=0; i<strlen(texto); i++){
            char c = texto[i];
            
            if((c>='a' && c<='z')||(c>='A' && c<='Z')){
                c = c+3;
                passo1[j++]= c;
            }else{
                passo1[j++]= c;
            }
        }
        passo1[j]='\0';
        strcpy(texto, passo1);
        for(i=strlen(texto)-1; i>=0;i--){
            passo2[k++]= texto[i];
        }
        passo2[k]='\0';
        strcpy(texto, passo2);
        int tamanho = strlen(texto);
        l=0;
        
        for(i=0;i<tamanho;i++){
            char c = texto[i];
            if(i>=tamanho/2){
                c = c-1;
            }
            criptografia[l++]=c;
        }
        
        criptografia[l]= '\0';
        printf("%s\n", criptografia);
    }
        }else {
            return 0;
        }

    return 0;
}