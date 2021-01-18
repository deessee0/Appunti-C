#include <stdio.h>
#include <malloc.h>

struct elemento{ int info; struct elemento* next; };

typedef struct elemento ElementodiLista;
typedef ElementodiLista* ListadiElementi;

void addT(ListadiElementi* l, int x)
{
    ListadiElementi new = malloc(sizeof(ElementodiLista));
    new->info = x;
    new->next = *l;
    *l = new;
}

int main(void) 
{
    ListadiElementi lista = NULL; //lista vuota
    int N = 10;

    //Primo elemento
    ListadiElementi new = malloc(sizeof(ElementodiLista));
    (*new).info = 1;
    //link
    lista = new;

    for(int i = 2; i < N; i++)
    {
        //prossimo elemento allocato e linkato
        (*new).next = malloc(sizeof(ElementodiLista));
        //sposto puntatore
        new = new->next;
        //assegnazione valore
        (*new).info = i;
    }

    new->next=NULL;

    addT(&lista, 8);
}

