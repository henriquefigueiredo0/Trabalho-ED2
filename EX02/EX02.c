#include "EX02.h"

void busca_binaria(int esq, int dir, int alvo, int *primeira, int *ultima, int numeros[], char ordem){
    if(ordem == 'a'){
        if(dir<esq) return;
        int meio = (esq+dir)/2;
        if(numeros[meio] == alvo){
            if(meio < *primeira){
                *primeira = meio;
            }
            if(meio > *ultima){
                *ultima = meio;
            }
            busca_binaria(esq, meio-1, alvo, primeira, ultima, numeros, ordem);
            busca_binaria(meio+1, dir, alvo, primeira, ultima, numeros, ordem);
        }
        else if(numeros[meio] > alvo){
            busca_binaria(esq, meio-1, alvo, primeira, ultima, numeros, ordem);
        }
        else busca_binaria(meio+1, dir, alvo, primeira, ultima, numeros, ordem);
    }
    else if(ordem == 'd'){
        if(dir<esq) return;
        int meio = (esq+dir)/2;
        if(numeros[meio] == alvo){
            if(meio < *primeira){
                *primeira = meio;
            }
            if(meio > *ultima){
                *ultima = meio;
            }
            busca_binaria(esq, meio-1, alvo, primeira, ultima, numeros, ordem);
            busca_binaria(meio+1, dir, alvo, primeira, ultima, numeros, ordem);
        }
        else if(numeros[meio] > alvo){
            busca_binaria(meio+1, dir, alvo, primeira, ultima, numeros, ordem);
        }
        else busca_binaria(esq, meio-1, alvo, primeira, ultima, numeros, ordem);
    }
}

int conta_numeros(char *string){
    int count = 1;
    for(int i = 0;;i++){
        if(string[i] == ',') count++;
        if(string[i] == '\0') break;
    }
    return count;
}

void copia_numeros(int *numeros, char *string){
    char aux[strlen(string)];
    int posicao = 0;
    int j = 0;
    for(int i = 0;; i++){
        if(string[i] == ',' || string[i] == '\0'){
            aux[j] == '\0';
            numeros[posicao] = atoi(aux);
            posicao++;
            j = 0;
            if(string[i] == '\0') break;
        }
        else{
            aux[j] = string[i];
            j++;
        }
    }
}
