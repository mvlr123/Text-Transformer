#include <stdio.h>

int main(){
    int n, i;
    int freq[101]={0};

    scanf("%d", &n);

    for(i = 0; i<n;i++){
        int numero;
        scanf("%d", &numero);
        freq[numero]++;
    }

    int mais_freq = 0;
    int quant_freq = 0;

        for(i=0; i<=100; i++){
            if(freq[i]>quant_freq){
                mais_freq = i;
                quant_freq = freq[i];
            }else if (quant_freq==freq[i] && i<mais_freq){
                mais_freq = i;
            }
        }
        printf("%d\n%d\n", mais_freq, quant_freq);


    return 0;
}