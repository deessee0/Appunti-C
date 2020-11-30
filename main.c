#include <stdio.h>
#include <stdlib.h>

struct complesso{
    float reale;
    float imm;
};

typedef struct complesso TipoComplesso;

TipoComplesso somma (TipoComplesso c1, TipoComplesso c2){
    TipoComplesso c3;
    c3.reale = c1.reale + c2.reale;
    c3.imm = c1.imm + c2.imm;

    return c3;
}

TipoComplesso prodotto (TipoComplesso c1, TipoComplesso c2){
    TipoComplesso c3;
    c3.reale = (c1.reale * c2.reale - c1.imm * c2.imm);
    c3.imm = (c1.reale * c2.imm + c1.imm * c2.reale);

    return c3;
}

void printfComplesso(TipoComplesso c){
    printf("parte reale: %f \n", c.reale);
    printf("parte imm: %f \n", c.imm);
}

int main(void) {

    TipoComplesso c1, c2, c3;

    printf("dammi i dati per c1\n");
    scanf("%f",&c1.reale);
    scanf("%f",&c1.imm);

    printf("dammi i dati per c2\n");
    scanf("%f",&c2.reale);
    scanf("%f",&c2.imm);

    printfComplesso(c1);
    printfComplesso(c2);

    c3 = somma(c1,c2);
    




  return 0;
}