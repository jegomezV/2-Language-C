#include <stdio.h>
int main (){
    int x;
    
        printf("Introduzca un numero\n");
        scanf("%i",&x);

   if(x >= 1 && x <= 10){
 
   printf ("El numero %i esta entre 1 y 10. \n",x);

}
else {
        printf ("El numero de %i NO esta entre 1 y 10. \n",x);
}

        
        return 0;
}