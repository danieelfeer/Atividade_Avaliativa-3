#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Aceita pelo Marvin

int RomanoParaDecimal(char algarismo) {
    switch (algarismo) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: break; 
    }
}


int main() {
    char numRomano[15];
    int dec = 0;
    scanf("%s", numRomano);

    for (int i = 0; i < strlen(numRomano); i++) {
        int valorAtual = RomanoParaDecimal(numRomano[i]);

        if (i + 1 < strlen(numRomano) && RomanoParaDecimal(numRomano[i + 1]) > valorAtual) {
            dec -= valorAtual;
        } else {
            dec += valorAtual;
        }
    }

    int decBin = dec;
    int decHex = dec;
   

    int bin[10], j;

    for (j = 0; decBin > 0; j++) {
        bin[j] = decBin % 2;
        decBin = decBin / 2;
    }

    printf("%s na base 2: ", numRomano);
    for (j = j - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    printf("\n");
    
    printf("%s na base 10: %d\n", numRomano, dec);
    

    int k = 0;
    char hex[k];

    while (decHex > 0) {
        int r = decHex % 16;

        if (r < 10) {
            hex[k] = '0' + r;
        } else {
            hex[k] = 'a' + (r - 10);
        }
        decHex = decHex / 16;
        k++;
    }

    printf("%s na base 16: ", numRomano);
    
    while(k--){
        printf("%c", hex[k]);
    }
    
    printf("\n");



    return 0;
}