
#ifndef FILA_H
#define FILA_H

#include <stdbool.h>

#define TAM 5

typedef struct {
    int dados[TAM];
    int inicio;
    int fim;
    int tamanho;
} Fila;
bool consultarFrente(Fila *f, *valor) 
void criarFila(Fila *f);
bool estaVazia(Fila *f);
bool estaCheia(Fila *f);
bool enfileirar(Fila *f, int valor);
bool desenfileirar(Fila *f, int *valor);
int consultarFrente(Fila *f);
void mostrarFila(Fila *f);

#endif
