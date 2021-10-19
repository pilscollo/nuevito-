#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"
///agregar al final x
///mostrar x
///borrar x
///iniclista x
///crearnodo x

nodo* iniclista()
{
    return NULL;
}

nodo* crearNodo(int dato){
    nodo* nuevo=(nodo*)malloc(sizeof(nodo));

    nuevo->dato=dato;
    nuevo->ante=iniclista();
    nuevo->sig=iniclista();

    return nuevo;
}

nodo* agregarAlFinal(nodo* lista,nodo* nuevo)
{
    if(lista==NULL)
    {
        lista=nuevo;
    }else
    {
        nodo* seg=lista;


        while(seg->sig!=NULL)
        {
            seg=seg->sig;
        }
        nuevo->ante=seg;
        seg->sig=nuevo;
    }

    return lista;
}

void mostrarLista(nodo* lista)
{
    while(lista!=NULL)
    {
        printf(" %i| ",lista->dato);
        lista=lista->sig;
    }
}

nodo* borrar(nodo* lista)
{
    nodo* aux;
    if(lista!=NULL)
    {
        aux=lista;
        lista=lista->sig;
        free(aux);
    }

    return lista;
}

int primeroE(nodo* lista)
{
    if(lista!=NULL)
    {
        return lista->dato;
    }else{
        return NULL;
    }
}
