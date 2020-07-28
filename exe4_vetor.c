#include <stdio.h>
#define TAMN 12


int main(){
    int n[TAMN], c;

    for ( c = 0; c < n[TAMN]; c++)
    {
        printf("Informe o valor de [%i]", c);
        scanf("%i", &n[c]);
    }

        for ( c = 0; c < n[TAMN]; c++)
    {
        printf("Os valores do vetor são %i", n[c]);
    }
    



    return 0;
}