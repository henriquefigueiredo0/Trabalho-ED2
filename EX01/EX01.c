#include "EX01.h"

void operacoes(int alvo, int numeros[], int auxiliar[], int tam, int indice, char op[]){
    //printf("%d\n", indice);
    recursoes++;
    if(indice == tam){
        auxiliar[0] = auxiliar[tam-1];
        return;
    }
    if(indice == 1) auxiliar[indice] = numeros[indice-1] + numeros[indice];
    else auxiliar[indice] = auxiliar[indice-1] + numeros[indice];
    op[indice-1] = '+';
    operacoes(alvo, numeros, auxiliar, tam, indice+1, op);
    if(auxiliar[0] == alvo) return;


    if(indice == 1) auxiliar[indice] = numeros[indice-1] - numeros[indice];
    else auxiliar[indice] = auxiliar[indice-1] - numeros[indice];
    op[indice-1] = '-';
    operacoes(alvo, numeros, auxiliar, tam, indice+1, op);
    if(auxiliar[0] == alvo) return;


    if(indice == 1) auxiliar[indice] = numeros[indice-1] * numeros[indice];
    else auxiliar[indice] = auxiliar[indice-1] * numeros[indice];
    op[indice-1] = '*';
    operacoes(alvo, numeros, auxiliar, tam, indice+1, op);
    if(auxiliar[0] == alvo) return;


    if(indice == 1){
        if(numeros[indice] != 0 && numeros[indice-1] % numeros[indice] == 0){
        auxiliar[indice] = numeros[indice-1] / numeros[indice];
        op[indice-1] = '/';
        operacoes(alvo, numeros, auxiliar, tam, indice+1, op);
        }
    }
    else{
        if(numeros[indice] != 0 && auxiliar[indice-1] % numeros[indice] == 0){
        auxiliar[indice] = auxiliar[indice-1] / numeros[indice];
        op[indice-1] = '/';
        operacoes(alvo, numeros, auxiliar, tam, indice+1, op);
        }
    }

    return;
}

void imprime_resposta(int tam, int auxiliar[], int numeros[], char op[], int alvo){
    printf("%d\n", recursoes);
    if(auxiliar[0] == alvo){
        for(int i = 0; i<tam-1;i++){
            printf("(");
        }
        for(int i = 0; i<tam; i++){
            if(i==0) printf("%d %c ", numeros[i], op[i]);
            else if(i==tam-1) printf(" %d) = %d\n", numeros[i], auxiliar[0]);
            else printf("%d) %c ", numeros[i], op[i]);
        }
    }
    else printf("Nao foi possivel formar o valor alvo\n");

}
