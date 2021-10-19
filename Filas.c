#include "Filas.h"


int extraer(Fila* f)
{
    if(f!=NULL)
    {
        int dato= primeroE(f->inicio);
        f->inicio=borrar(f->inicio);
        return dato;
    }else{
        return NULL;
    }
}

void inicfila(Fila* f)
{
    f->fin=iniclista();
    f->inicio= iniclista();
}

void agregar(Fila* f,int dato)
{
    nodo* nuevo = crearNodo(dato);
    f->fin=agregarAlFinal(f->fin,nuevo);

    if(f->inicio==NULL)
    {
        f->inicio= f->fin;
    }

    f->fin= nuevo;
}
void mostrar(Fila f)
{
    mostrarLista(f.inicio);
}

void leer(Fila* f)
{
    int dato=0;
    fflush(stdin);
    scanf("%i",&dato);
    agregar(f,dato);
}

int primero(Fila f)
{
    int dato= primeroE(f.inicio);
    return dato;
}

int filaVacia(Fila f)
{
    if(f.inicio!=NULL)
    {
        return 0;
    }else{
        return 1;
    }
}
