#include <stdio.h> 
#include <stdlib.h>
main (){     
     int vet [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
     int *p;    
     p=vet; 
     printf ("O terceiro elemento do vetor e: %d",p[2]); 
     printf ("\n\nO terceiro elemento do vetor e: %d  \n\n",*(p+2)); 
     system ("PAUSE");
}
