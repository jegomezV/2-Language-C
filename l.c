#include <stdio.h>
#include <stdlib.h>
int main (){
    char c;

    do{
printf("Introduce una letra: \n");
getchar();// con esta funcion evitamos que nuestro print se repita varias veces
 scanf ("%c",&c);

    }while(c != 's');
  

    return 0;
    }
