//Operaciones con variables y macros 
#include <stdio.h>
#define PI 3.1416

int main (){
    int y;
    float x = PI;

    printf("Introduce un valor para y: ");
    scanf("%i",&y);
    printf("El valor de y es:\n %i. \n",y);

    x = x * y;
    printf ("El nuevo valor de x es: %f.\n\n",x);

    return 0;
}