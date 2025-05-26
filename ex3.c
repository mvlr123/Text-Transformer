#include <stdio.h>
int main(){
    int N, i, quant;
        scanf("%d", &N);
 
    int V[N];
        for(i=0;i<N;i++){
            scanf("%d", &V[i]);
        }
        for(i=0;i<N;i++){
            if(V[i]%2==0){
                printf("%d ", V[i]);
                quant+=1;
            }
        }
        printf("%d\n", quant);
    return 0;
}