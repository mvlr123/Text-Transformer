#include <stdio.h>
 
int main(){
    int alunos, minimo, i;
    int antes = 0;
    int horario[10000];
 
    scanf("%d %d", &alunos, &minimo);

    if(alunos<0 || minimo>1000){
        return 0;
    }
 
    for(i=0; i<alunos; i++){
        scanf("%d", &horario[i]);
        if(horario[i]<=0){
            antes++;
        }
    }
        if(antes>=minimo){
            printf("NAO\n");
            for(i=alunos-1; i>=0; i--){
                if(horario[i]<=0){
                    printf("%d\n", i+1);
                }
            }
        }else{
            printf("SIM\n");
            return 0;
        }
 
 
 
    return 0;
}