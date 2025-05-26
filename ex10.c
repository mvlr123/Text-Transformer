#include <stdio.h>
#include <string.h>
 
int main(){
    int n;
    char num_invertido[32], num[32];
    int i, k;
    while(scanf("%d", &n) != EOF){
        i = 0;
        k = 0;
            
        if (n==0){
            printf("0\n");
            continue;
        }
            while(n>0){
                if(n%2==0){
                    num_invertido[k++]= '0';
                }else if(n%2==1){
                    num_invertido[k++]= '1';
                }
                n=n/2;
            }
            num_invertido[k]='\0';
            for(k = strlen(num_invertido)-1;k>=0;k--){
                num[i++]=num_invertido[k];
            }
            num[i]= '\0';
            printf("%s\n", num);
            
        }
 
    return 0;
}