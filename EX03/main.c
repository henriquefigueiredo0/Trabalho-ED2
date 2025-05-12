#include "EX03.h"

int main()
{
    int tam;
    FILE *arq = fopen("dados.txt", "rt");
    fscanf(arq, "%d", &tam);
    fclose(arq);
    le_tabela("dados.txt");
    //cria_tabela(14, "dados.txt");
}
