#include <stdio.h>
#include <stdlib.h>

main () {
	float years, days;
	printf ("Enter your age: ");
	scanf ("%f", &years);
	days = years * 365;
    printf ("Your age in days is approximately:  %.0f.\n", days);
    system ("PAUSE");
}

