#include <stdio.h>
int main (){
    int i;
    float suma; //Se declara de tipo flotante ya que el numero va a sobre pasar la cantidad de bits permitidos por el int.
    suma = 0;
    
    //En el buble for primero realizamos la inicializacion, 
    for(i = 2 ; i <= 2000 ; i += 2){
        suma += i;
    }
    
    printf ("El resultado de la suma es: %i.\n",suma);
    
    return 0;
    }
