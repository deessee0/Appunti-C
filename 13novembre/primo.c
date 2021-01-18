#include <stdio.h>
#include <malloc.h>

struct elemento{ int info; struct elemento* next; };

typedef struct elemento ElementodiLista;
typedef ElementodiLista* ListadiElementi;

int main(void) 
{
    
  
    return 0;
}

int lenght(ListadiElementi l)
{
    int count = 0;

    while(l != NULL)
    {
        count++;
        l = l -> next;
    }
    return count;
}

int lenghtRec(ListadiElementi l)
{
    if(l == NULL) return 0;
    else 
    {
        return 1 + lenghtRec(l->next);
    }
}

int ovol(ListadiElementi l)
{
    int ordinata = 1;
    while(l->next != NULL && ordinata)
    {
        if(l->info >= l->next->info)
        {
            ordinata = 0;
        } 
        else
        {
            l = l->next;
        }
        return ordinata;
    }
}

