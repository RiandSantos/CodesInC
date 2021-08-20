#include <stdio.h>
#include<stdlib.h>
int main() {
unsigned char i;
for (i = 32; i < 255; i++)
printf("\ndecimal = %3d * hexadecimal = %2x * caracter =%1c",i,i,i);
}
