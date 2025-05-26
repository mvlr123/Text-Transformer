#include <stdio.h>
 
int main(){
    int n, i, N, k;
    scanf("%d", &n);
    int vetoriginal[n];
    
    if(n >= 1 && n <= 100000){
        for(i = 0; i < n; i++){
            scanf("%d", &vetoriginal[i]); 
        }
 
        scanf("%d", &N);
        int vetcomparacao[N];
        
        for(k = 0; k < N; k++){
            scanf("%d", &vetcomparacao[k]);
        }
        
        for(k = 0; k < N; k++){
            for(i = 0; i < n; i++){
                if(vetcomparacao[k] == vetoriginal[i]){
                    printf("ACHEI\n");
                    break;
                }
            }
            if(i == n){
                printf("NAO ACHEI\n");
            }
        }
    }
    
    return 0;
}