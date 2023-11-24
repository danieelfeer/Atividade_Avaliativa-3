#include <stdio.h>
#include <math.h>
//Aceito pelo Marvin

int main() {
    int tempo;
    double aporte, taxa;

    scanf("%d", &tempo);
    scanf("%lf", &aporte);
    scanf("%lf", &taxa);

    double total;

    for(int i = 1; i -1 < tempo; i++){
        total = aporte * (1 + taxa) * ((pow((1 + taxa), i) - 1) / taxa);
        printf("Montante ao fim do mes %d: R$ %.2f\n", i, total);
    }

    return 0;
}
