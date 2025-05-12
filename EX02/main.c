#include "EX02.h"

int main(int argc, char *argv[]){
    if(argc == 1){
        int numeros[8] = {1,2,3,3,3,4,5,6};
        int alvos[2] = {3,7};
        for(int i = 0; i<2; i++){
            int primeiro = 8, ultimo = -1;
            busca_binaria(0, 7, alvos[i], &primeiro, &ultimo, numeros, 'a'); 
            if(ultimo == -1){
                printf("(-1, -1)");
            }
            else{
                printf("(%d, %d)", primeiro, ultimo);
            }
            if(i!=1) printf(", ");
        }

        printf("\n");

        int numeros2[9] = {8,8,6,5,5,5,3,2,1};
        int alvos2[3] = {5,8,7};
        for(int i = 0; i<3; i++){
            int primeiro = 9, ultimo = -1;
            busca_binaria(0, 8, alvos2[i], &primeiro, &ultimo, numeros2, 'd');
            if(ultimo == -1){
                printf("(-1, -1)");
            }
            else{
                printf("(%d, %d)", primeiro, ultimo);
            }
            if(i!=2) printf(", ");
        }
    }
    else{
        int tamanho = conta_numeros(argv[1]);
        int numeros[tamanho];
        copia_numeros(numeros, argv[1]);

        int tamanho2 = conta_numeros(argv[3]);
        int alvos[tamanho];
        copia_numeros(alvos, argv[3]);


        for(int i = 0; i<tamanho2; i++){
            int primeiro = tamanho, ultimo = -1;
            busca_binaria(0, tamanho-1, alvos[i], &primeiro, &ultimo, numeros, (argv[2])[0]);
            if(ultimo == -1){
                printf("(-1, -1)");
            }
            else{
                printf("(%d, %d)", primeiro, ultimo);
            }
            if(i!=tamanho2-1) printf(", ");
        }
        printf("\n");
    }
}
