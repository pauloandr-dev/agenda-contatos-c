#ifndef CONTATOS_H
#define CONTATOS_H

#define MAX_CONTATOS 100
#define TAM_NOME 50

typedef struct {
    char nome[TAM_NOME];
    char telefone[TAM_NOME];
} Contato;

void adicionarContato(Contato contatos[], int *total);
void listarContatos(const Contato contatos[], int total);
void removerContato(Contato contatos[], int *total);
void limparTela();

#endif
