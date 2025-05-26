#include <stdio.h>

double string2double(const char *str) {
    double inteiro = 0.0;
    double fracao = 0.0;
    int i = 0;
    int negativo = 0;
    int ponto_encontrado = 0;
    double divisor = 10.0;

    // Verifica sinal
    if (str[i] == '-') {
        negativo = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (!ponto_encontrado) {
                inteiro = inteiro * 10 + (str[i] - '0');
            } else {
                fracao += (str[i] - '0') / divisor;
                divisor *= 10;
            }
        } else if (str[i] == '.') {
            ponto_encontrado = 1;
        } else {
            break;
        }
    }

    double resultado = inteiro + fracao;
    if (negativo) {
        resultado = -resultado;
    }
    return resultado;
}

int main() {
    char str[129];
    while (scanf("%128s", str) != EOF) {
        double n = string2double(str);
        printf("%.3lf %.3lf\n", n, n + n);
    }
    return 0;
}
