#include <stdio.h>
int main (){
    int x, y, i; //la i es para definir las iteraciones del For
    
        printf("Introduzca un numero:\n");
            scanf("%i",&x);

        printf("Introduzca un numero mayor que el anterior:\n");
            scanf("%i",&y);

    i = x + 1;
    while(i < y){ 

    printf("%i,",i);

    i++;
    
    }
 }
 