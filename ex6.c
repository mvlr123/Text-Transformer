#include <stdio.h>
#include <string.h>
 
int main() {
    int n, i;
    char palavra[10];
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%s", palavra);
        int len = strlen(palavra);
        
        if(len == 3) {
            int um = 0, dois = 0;
            
 
            if(palavra[0] == 'o') um++;
            if(palavra[1] == 'n') um++;
            if(palavra[2] == 'e') um++;
            
 
            if(palavra[0] == 't') dois++;
            if(palavra[1] == 'w') dois++;
            if(palavra[2] == 'o') dois++;
            
            if(um >= 2) {
                printf("1\n");
            } else if(dois >= 2) {
                printf("2\n");
            }
            
        } else if(len == 5) {
            int tres = 0;
            
 
            if(palavra[0] == 't') tres++;
            if(palavra[1] == 'h') tres++;
            if(palavra[2] == 'r') tres++;
            if(palavra[3] == 'e') tres++;
            if(palavra[4] == 'e') tres++;
            
            if(tres >= 4) {
                printf("3\n");
            }
        }
    }
    
    return 0;
}