#include <stdio.h>
int main (){
    int h, min, seg;
    
        printf("Introduzca valor horas\n");
            scanf("%i",&h);

        printf ("introduce valor minutos:\n");
            scanf("%i",&min);

    
        printf ("introduce valor segundos:\n");
            scanf("%i",&seg);

if (h < 24 && min <= 59 && seg <= 59){
    seg += 1;

if(seg == 60){
    min += 1;
    seg = 0;
}

if(min == 60){
    h += 1;
    min = 0;
}
 printf("La hora es: %i:%i:%i.\n", h, min, seg);

}
else {
    printf("La hora introducida no es correcta. \n");
}

        
        return 0;
}