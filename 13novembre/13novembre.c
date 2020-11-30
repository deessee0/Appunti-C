#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  
  return 0;
}

int lenght(listaDiElementi l)
{
    int count = 0;

    while(l != NULL)
    {
        count++;
        l = l -> next;
    }
    return count;
}

int lenghtRec(listaDiElementi l)
{
    if(l == NULL) return 0;
    else {
        return 1 + lenghtRec(listaDiElementi (l->next));
    }
}

