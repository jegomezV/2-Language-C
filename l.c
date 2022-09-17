#include <stdio.h>
int main (){
    int i,aux;
    i = 10;
    
        printf("Ingrese el numero el cual crea sea el valor de la variable i:\n");
    
        scanf("%i",&aux);

        if (i == aux)
    {
        printf("El valor coincidio!!\n");
        }
        else {
        printf("El valor era 10 \n");
        }
    
        return 0;
}