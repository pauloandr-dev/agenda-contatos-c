#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contatos.h"

void limparTela() {
    #ifdef _WIN32
        system("cls");  
    #else
        system("clear"); 
    #endif
}

void adicionarContato(Contato contatos[], int *total) {
    if (*total >= MAX_CONTATOS) {
        printf("Agenda cheia!\n");
        return;
    }

    limparTela();
    printf("Adicionar Contato\n");
    printf("Nome: ");
    fgets(contatos[*total].nome, TAM_NOME, stdin);
    strtok(contatos[*total].nome, "\n");  
    printf("Telefone: ");
    fgets(contatos[*total].telefone, TAM_NOME, stdin);
    strtok(contatos[*total].telefone, "\n"); 

    (*total)++;
    printf("Contato adicionado com sucesso!\n");
    getchar(); 
}

void listarContatos(const Contato contatos[], int total) {
    limparTela();
    printf("Listar Contatos\n");
    for (int i = 0; i < total; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("\n");
    }
    getchar(); 
}

void removerContato(Contato contatos[], int *total) {
    int indice;
    limparTela();
    printf("Remover Contato\n");
    listarContatos(contatos, *total);
    printf("Digite o número do contato a ser removido: ");
    scanf("%d", &indice);
    getchar(); 

    if (indice < 1 || indice > *total) {
        printf("Contato inválido!\n");
        return;
    }

    for (int i = indice - 1; i < *total - 1; i++) {
        contatos[i] = contatos[i + 1];
    }

    (*total)--;
    printf("Contato removido com sucesso!\n");
    getchar(); 
}
