#include <stdio.h>
#include <string.h>
 
int main(){
    int i, n;
    char string[10000];
 
        scanf("%d", &n);
        fgets(string, 10000, stdin);
 
        while(n--){
            int letras = 0, vogais = 0, consoantes = 0;
                fgets(string, 10000, stdin);
 
                for(i=0; string[i]!= '\0'; i++){
                    char c = string[i];
 
                    if((c>='A' && c<='Z') || ( c>='a'&& c<='z')){
                        letras++;
                        if(c=='A' || c=='E'|| c=='I'||c=='O'||c=='U'||
                           c=='a' || c=='e'|| c=='i'||c=='o'||c=='u'){
                            vogais++;
                        }else{
                            consoantes++;
                        }
                    }
                }
                printf("Letras = %d\n", letras);
                printf("Vogais = %d\n", vogais);
                printf("Consoantes = %d\n", consoantes);
        }
 
    return 0;
}