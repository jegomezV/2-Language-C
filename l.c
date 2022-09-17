#include <stdio.h>
int main (){
    int x,y,z,max,min;
    
        printf("Introduzca el valor para x:\n");
        scanf("%i",&x);

        printf("Introduzca el valor para y:\n");
        scanf("%i",&y);

        printf("Introduzca el valor para z:\n");
        scanf("%i",&z);

            if(x > y){
                if (x > z){
                    max = x;
                    }
                        else {
                            max = z;
                        }
            }
            else{
                if(y > z)
                max =y;
                else{
                    max = z;
                }
                }

        printf ("El mayor de los tres numeros es: %i",max);
        return 0;
}