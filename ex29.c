#include <stdio.h>
#include <string.h>

int main(){
    int q1, q2, i, j = 0;
    
    scanf("%d", &q1);
    scanf("%d", &q2);

    int vet1[q1], vet2[q2];

    for(i = 0; i<q1; i++){
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i<q2;i++){
        scanf("%d", &vet2[i]);
    }

    i = 0;

    while(i<q1 && j<q2){
        if(vet1[i]<=vet2[j]){
            printf("%d\n", vet1[i]);
            i++;
        }else{
            printf("%d\n", vet2[j]);
            j++;
        }
    }

        while(i<q1){
            printf("%d\n", vet1[i]);
            i++;
        }

        while(j<q2){
            printf("%d\n", vet2[j]);
            j++;
        }

    return 0;
}