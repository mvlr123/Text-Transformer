#include <stdio.h>
#include <string.h>
 
int main (){
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b;
        scanf("%d%d",&a,&b);
        
        int i;
        char numero[200000] = "";
        char temp[20];   
        for(i= a ; i <= b ; i++){
            sprintf(temp ,"%d" ,i); 
            strcat(numero,temp);
        }
        printf("%s",numero);
 
        int tam = strlen(numero);
        for(i = tam -1 ; i>= 0 ; i--){
            printf("%c",numero[i]);
        }
        printf("\n");
 
    }
 
 
 
    return 0;
}