#include <stdio.h>
#include <stdlib.h>
#include "contatos.h"

void menuPrincipal(Contato contatos[], int *total) {
    int opcao;

    while (1) {
        limparTela();
        printf("Agenda de Contatos\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Remover Contato\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch(opcao) {
            case 1:
                adicionarContato(contatos, total);
                break;
            case 2:
                listarContatos(contatos, *total);
                break;
            case 3:
                removerContato(contatos, total);
                break;
            case 4:
                limparTela();
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opcao invalida! Tente novamente.\n");
                getchar();
                break;
        }
    }
}

int main() {
    Contato contatos[MAX_CONTATOS];
    int total = 0;

    menuPrincipal(contatos, &total);
    return 0;
}
