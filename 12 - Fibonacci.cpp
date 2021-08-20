#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("\nFibonacci Series:\n\n");
    printf("%d\n", b);

    for(i = 1; i < n; i++) {

        auxiliar = a + b;
        a = b;
        b = auxiliar;

        printf("%d\n", auxiliar);
    }
}
