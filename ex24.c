#include <stdio.h>
#include <string.h>

/**
* Converte a string str para o valor inteiro correspondente.
* @param str string contendo um número inteiro
* @return o número inteiro correspondente
*/

long int string2int( const char * str );

int main(){
    char str[2000];
    while( scanf("%s", str) != EOF ) {
        long int n = string2int(str);
        printf("%ld %ld\n", n, n*2);
    }



    return 0;
}

long int string2int( const char * str ){
    long int resultado = 0;
    int negativo = 0;
    int i = 0;

    if(str[0] == '-'){
        negativo = 1;
        i = 1;
    }

    while(str[i]!='\0'){
        if(str[i]>='0' && str[i]<='9'){
            resultado = resultado * 10 + str[i]- '0';
        }else{
            break;
        }
        i++;
    }
    if(negativo>0){
        resultado = -resultado;
    }

    return resultado;
}