#include <stdio.h>

int main(void) 
{
    
}

int member(int a[], int dim, int x)
{
    
    int i = 0;
    int trovato = 0;
    
    while(i < dim && !trovato )
    {
        if(a[i] == x) trovato = 1;
        i++;
    }
    
    return trovato;
}