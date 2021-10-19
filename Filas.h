#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"

typedef struct{
    nodo* inicio;
    nodo* fin;
}Fila;

/**
a) inicfila. x
b) agregar x
c) extraer x
d) mostrar x
e) leer x
f) primero x
g) filavacía x
**/

int extraer(Fila* f);
void inicfila(Fila* f);
void agregar(Fila* f,int dato);
void mostrar(Fila f);
void leer(Fila* f);
int primero(Fila f);
int filaVacia(Fila f);
