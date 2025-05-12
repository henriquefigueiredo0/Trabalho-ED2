#include "EX03.h"

unsigned int hash1(char nusp[8], int tamanho){
    int primos[8] = {2, 3, 5, 7, 11, 13, 17, 19};
    unsigned int result = 0;
    for(int i = 0; i<8; i++){
        int intermed = (int)(nusp[i] - '0' + 1);
        intermed *= primos[i];
        intermed = intermed ^ invert_16;
        if(i%2 == 0) result = result ^ intermed;
        else result = result ^ inverso(intermed, 1);
    }
    return result % tamanho;
}

unsigned int inverso(unsigned int num, unsigned int pot2){
    if(num >= M_pot2 / pot2){
        num -= M_pot2 / pot2;
        if(num == 0) return pot2;
        else return pot2 + inverso(num, pot2*2);
    }
    else return inverso(num, pot2*2);
}

int primo(int inicio){
    for(int i = inicio;;i++){
        int flag = 1;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag) return i;
    }
}

void cria_tabela(int tamanho, char path[]){
    FILE *arq = fopen(path, "w");
    fprintf(arq, "%d\n", primo(tamanho));
    for(int i = 0; i<primo(tamanho); i++){
        fprintf(arq, "\n");
    }
    fclose(arq);
}

Aluno *le_tabela(char path[]){
    FILE *arq = fopen(path, "rt");
    int tam;
    fscanf(arq, "%d", &tam);
    Aluno tabela[tam];
    char auxiliar[100];
    char auxiliar2[100];
    for(int i = 0; i<tam; i++){
        fgets(auxiliar, 100, arq);

    }
    return tabela;
}


