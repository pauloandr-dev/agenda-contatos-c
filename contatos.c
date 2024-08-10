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
