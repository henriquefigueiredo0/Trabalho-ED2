#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define invert_16 4294901760
#define M_pot2 2147483648

struct aluno{
    unsigned int nusp;
    char nome[100];
    char curso[100];
};

typedef struct aluno Aluno;

unsigned int hash1(char nusp[8], int tamanho);
unsigned int inverso(unsigned int num, unsigned int pot2);
int primo(int inicio);
void cria_tabela(int tamanho, char path[]);
Aluno *le_tabela(char path[]);
