#include <stdio.h>

int minoreditutti(int a[], int dim, int x)
{
    
    int i = 0;
    int trovato = 0;
    
    while(i < dim && !trovato )
    {
        if(a[i] < x) trovato = 1;
        i++;
    }
    
    return trovato;
}

int minimo(int a[], int dim)
{
    
    int i = 0;
    int trovato = 0;
    int min;
    
    while(i < dim && !trovato )
    {
        if(minoreditutti(a, dim, a[i]))
        {
            trovato = 1;
            min = a[i];
        }
        i++;
    }
    
    return trovato;
}

int main(void) 
{
    
}

