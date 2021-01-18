#include <stdio.h>
#include <malloc.h>

int main(void) 
{
    int dim;
    scanf("%d", &dim);

    int *a = malloc( sizeof(int) *dim );
    for(int i=0; i<dim; i++){
        a[i] = i;
    } 
    
}

