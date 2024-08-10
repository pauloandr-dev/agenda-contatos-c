#include <stdio.h>
#include "contatos.h"

#define MAX_CONTATOS 100

char listaDeContatos[MAX_CONTATOS][50];
int totalContatos = 0;

void adicionarContato() {
    if (totalContatos < MAX_CONTATOS) {
        printf("Digite o nome do contato: ");
        scanf("%s", listaDeContatos[totalContatos]);
        totalContatos++;
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("Agenda cheia!\n");
    }
}

void listarContatos() {
    printf("Lista de Contatos:\n");
    for (int i = 0; i < totalContatos; i++) {
        printf("%d. %s\n", i + 1, listaDeContatos[i]);
    }
}

void removerContato() {
    int indice;
    listarContatos();
    printf("Digite o número do contato que deseja remover: ");
    scanf("%d", &indece);

    if(indice > 0 &&indice <=totalContatos) {
        for (int i = indice -1; i < totalContatos - 1; i++) {
            strcpy(listaDeContatos[i], listadeContatos[i +1]);
            }
        totalContatos--;
        printf("Contato removido com sucesso!\n");
        } else {
            printf("Índice inválido!\n")        
        }
    }
