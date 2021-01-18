#include <stdio.h>
#include <malloc.h>

struct elemento
{
    //valore momorizzato
    int info;
    //Puntatore al prossimo elemento(stesso tipo)
    struct elemento* next;
};

// quando chiamo ElementodiLista in realtà dichiaro una struct
typedef struct elemento ElementodiLista;

//definisce un nuovo tipo ListadiElementi le cui variabili sono puntatori ad elementi di lista
typedef ElementodiLista* ListadiElementi;

int main(void) 
{
    //STATICO
    //un elemento di lista singolo
    ElementodiLista elem;

    elem.info = 10;
    elem.next = NULL;
    
    //DINAMICO
    //una lista singola
    ListadiElementi lista;
    //sposta la struc dalla MEM allo HEAP
    lista = malloc(sizeof(ElementodiLista));

    (*lista).info = 11;
    (*lista).next = NULL;
}

