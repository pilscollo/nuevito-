#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dato;
    struct nodo* sig;
    struct nodo* ante;
}nodo;


nodo* iniclista();
nodo* crearNodo(int dato);
nodo* agregarAlFinal(nodo* lista,nodo* nuevo);
void mostrarLista(nodo* lista);
nodo* borrar(nodo* lista);
int primeroE(nodo* lista);

