#include <stdio.h>
#include <stdlib.h>
#define tam 10
main () {
    int vetor[tam];    
    int i;
    for (i = 0; i < tam; i++) { 
        printf ("Valor[%d]: ", i);
        scanf ("%d", &vetor[i]);
    }
    printf ("\n*** Dados do vetor ***\n");
    for (i = 0; i < tam; i++) {
        printf ("%d ", vetor[i]);
    }    
    printf ("\n\n");
    system ("PAUSE");
}
