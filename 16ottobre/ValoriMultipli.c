#include <stdio.h>

int sommaprodotto(int x, int y, int *s)
{
    *s = x + y;
    return(x+y);
}

int main(void) 
{
    int somma, prodotto;
    int x,y;

    prodotto = sommaprodotto(x,y, &somma);
    
    return 0;
}