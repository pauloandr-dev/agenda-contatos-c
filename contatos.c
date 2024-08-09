#include <stdio.h>
#include "contatos.h"

void adicionarContato() {
    char nome[50];
    printf("Digite o nome do contato: ");
    scanf("%s", nome);
    printf("Contato %s adicionado com sucesso!\n", nome);
}
