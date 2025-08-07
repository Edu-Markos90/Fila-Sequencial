
#include <stdio.h>
#include "fila.h"

void criarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

bool estaVazia(Fila *f) {
    return f->tamanho == 0;
}

bool estaCheia(Fila *f) {
    return f->tamanho == TAM;
}

bool enfileirar(Fila *f, int valor) {
    if (estaCheia(f)) return false;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % TAM;
    f->tamanho++;
    return true;
}

bool desenfileirar(Fila *f, int *valor) {
    if (estaVazia(f)) return false;
    *valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % TAM;
    f->tamanho--;
    return true;
}

int consultarFrente(Fila *f) {
    if (estaVazia(f)) return -1;
    return f->dados[f->inicio];
}

void mostrarFila(Fila *f) {
    printf("Fila: ");
    for (int i = 0; i < f->tamanho; i++) {
        int idx = (f->inicio + i) % TAM;
        printf("%d ", f->dados[idx]);
    }
    printf("\n");
}
