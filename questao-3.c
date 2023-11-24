#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Aceito pelo Marvin


int UlitmoDigito(char*placa, char*dia,int validacao, int valdia){

    int numdia;

    if(validacao == 0){
        printf("Placa invalida\n");
    } 

    if(strcmp(dia, "SEGUNDA-FEIRA")==0){
        numdia = 2;
        strcpy(dia, "segunda-feira"); 
    } else if(strcmp(dia, "TERCA-FEIRA")==0){
        numdia = 3; 
        strcpy(dia, "terca-feira");
    } else if(strcmp(dia, "QUARTA-FEIRA")==0){
        numdia = 4; 
        strcpy(dia, "quarta-feira");
    } else if(strcmp(dia, "QUINTA-FEIRA")==0){
        numdia = 5; 
        strcpy(dia, "quinta-feira");
    } else if(strcmp(dia, "SEXTA-FEIRA")==0){
        numdia = 6; 
        strcpy(dia, "sexta-feira");
    } else if(strcmp(dia, "SABADO")==0 || strcmp(dia, "DOMINGO")==0){
        numdia = 7;
    } else{
        valdia = 1;
    }
    
    if(valdia == 1){
        printf("Dia da semana invalido\n");
        return 0;
    }    

    char ultimo = placa[strlen(placa)-1];

    if(validacao == 1){
        if((ultimo == '0' || ultimo =='1') && numdia == 2){
            return printf("%s nao pode circular segunda-feira\n", placa);
        }else if(((ultimo == '2' || ultimo =='3')) && numdia == 3){
            return printf("%s nao pode circular terca-feira\n", placa);
        } else if((ultimo == '4' || ultimo =='5') && numdia == 4){
            return printf("%s nao pode circular quarta-feira\n", placa);
        } else if((ultimo == '6' || ultimo =='7') && numdia == 5){
            return printf("%s nao pode circular quinta-feira\n", placa);
        } else if((ultimo == '8' || ultimo =='9') && numdia == 6){
            return printf("%s nao pode circular sexta-feira\n", placa);
        }else if(numdia == 7){
            return printf("Nao ha proibicao no fim de semana\n");
        } else {
            return printf("%s pode circular %s\n", placa, dia);
        }
    }

    
    
}



int main(){
    
    char placa[10];
    scanf("%s", placa);

    char dia[30];
    scanf("%s", dia);

    int validacao =0;
    int valdia = 0;

    if(placa[0] >= 'A' && placa[0] <= 'Z' &&
        placa[1] >= 'A' && placa[1] <= 'Z' &&
        placa[2] >= 'A' && placa[2] <= 'Z' &&
        placa[3] == '-' &&
        placa[4] >= '0' && placa[4] <= '9' &&
        placa[5] >= '0' && placa[5] <= '9' &&
        placa[6] >= '0' && placa[6] <= '9' &&
        placa[7] >= '0' && placa[7] <= '9'){
            validacao = 1;
    } else if(placa[0] >= 'A' && placa[0] <= 'Z' &&
        placa[1] >= 'A' && placa[1] <= 'Z' &&
        placa[2] >= 'A' && placa[2] <= 'Z' &&
        placa[3] >= '0' && placa[3] <= '9' &&
        placa[4] >= 'A' && placa[4] <= 'Z' &&
        placa[5] >= '0' && placa[5] <= '9' &&
        placa[6] >= '0' && placa[6] <= '9'){
            validacao = 1; 
    }

    UlitmoDigito(placa, dia, validacao, valdia);

    
    

    
    

    return 0;
}