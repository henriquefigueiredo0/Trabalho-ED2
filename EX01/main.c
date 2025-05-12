#include "EX01.h"

int main(int argc, char *argv[])
{
    if(argc == 1 || argc == 2){
        int numeros[3] = {3, 4, 2};
        int alvo = 14;
        int auxiliar[3] = {0, 0, 0};
        char op[2];
        recursoes = 0;
        operacoes(alvo, numeros, auxiliar, 3, 1, op);
        imprime_resposta(3, auxiliar, numeros, op, alvo);
        printf("\n");

        int numeros2[4] = {5, 2, 1, 8};
        int alvo2 = 16;
        int auxiliar2[4] = {0, 0, 0, 0};
        char op2[3];
        recursoes = 0;
        operacoes(alvo2, numeros2, auxiliar2, 4, 1, op2);
        imprime_resposta(4, auxiliar2, numeros2, op2, alvo2);
    }
    else if(argc == 3){
        if(atoi(argv[2]) == atoi(argv[1])) printf("%d = %d", atoi(argv[1]), atoi(argv[1]));
        else printf("Nao foi possivel formar o valor alvo");
    }
    else{
        int tam = argc-2;
        int alvo = atoi(argv[tam+1]);
        int numeros[tam];
        int auxiliar[tam];
        for(int i = 1; i<=tam; i++){
            numeros[i-1] = atoi(argv[i]);
        }
        for(int i = 0; i<tam; i++){
            auxiliar[i] = 0;
        }
        char op[tam-1];
        recursoes = 0;
        operacoes(alvo, numeros, auxiliar, tam, 1, op);
        imprime_resposta(tam, auxiliar, numeros, op, alvo);
    }
    printf("\n");
    system("Pause");
}
