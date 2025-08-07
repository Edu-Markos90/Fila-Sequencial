
#include <stdio.h>
#include "fila.h"

int main() {
    Fila f;
    criarFila(&f);
    int op, valor;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Inserir\n2. Remover\n3. Consultar frente\n4. Mostrar fila\n5. Está vazia?\n6. Está cheia?\n0. Sair\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Valor: ");
                scanf("%d", &valor);
                if (enfileirar(&f, valor)) printf("Inserido com sucesso.\n");
                else printf("Fila cheia.\n");
                break;
            case 2:
                if (desenfileirar(&f, &valor)) printf("Removido: %d\n", valor);
                else printf("Fila vazia.\n");
                break;
            case 3:
                valor = consultarFrente(&f);
                if (valor != -1) printf("Frente: %d\n", valor);
                else printf("Fila vazia.\n");
                break;
            case 4:
                mostrarFila(&f);
                break;
            case 5:
                printf(estaVazia(&f) ? "Sim\n" : "Não\n");
                break;
            case 6:
                printf(estaCheia(&f) ? "Sim\n" : "Não\n");
                break;
        }
    } while (op != 0);

    return 0;
}
