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

void addC(ListadiElementi* l, int x)
{
    //elemento
    ListadiElementi new = malloc(sizeof(ElementodiLista));
    (*new).info = x;
    (*new).next = NULL;
    //link speciale alla lista vuota
    if(*l == NULL) *l = new;
    else 
    {
        //copia puntatore
        ListadiElementi corr = *l;
        //scorri
        while(corr->next != NULL) corr = corr->next;
        //aggiusta puntatori
        corr->next = new;
    }
}

int main(void) 
{
    ListadiElementi lista = NULL;
    
    addT(&lista , 5);
    addT(&lista, 8);
}

