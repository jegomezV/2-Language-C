Empezamos con C.
¿Qué es C?
C es un lenguaje de propósito general:
-(Los lenguajes de propósito general, son lenguajes que pueden ser usados para varios propósitos, acceso a bases de datos, comunicación entre computadoras, comunicación entre dispositivos, captura de datos, cálculos matemáticos, diseño de imágenes o páginas.

-Era una filosofía completamente válida en la época (dorada) de los 8 bits. Teníamos ensamblador y código máquina para los programas de alto rendimiento, y BASIC para el aprendizaje, y tareas más sencillas.)

C es un lenguaje imperativo hay que indicarle el paso a paso (como) a la máquina (computador)
¿Qué es la programación imperativa?
La programación imperativa (del latín imperare = ordenar) es el paradigma de programación más antiguo. De acuerdo con este paradigma, un programa consiste en una secuencia claramente definida de instrucciones para un ordenador.

El código fuente de los lenguajes imperativos encadena instrucciones una detrás de otra que determinan lo que debe hacer el ordenador en cada momento para alcanzar un resultado deseado. Los valores utilizados en las variables se modifican durante la ejecución del programa. Para gestionar las instrucciones, se integran estructuras de control como bucles o estructuras anidadas en el código.

Los lenguajes de programación imperativa son muy concretos y trabajan cerca del sistema. De esta forma, el código es, por un lado, fácilmente comprensible, pero, por el otro, requiere muchas líneas de texto fuente para describir lo que en los lenguajes de la programación declarativa se consigue con solo una parte de las instrucciones.

Los lenguajes de programación imperativa más conocidos son:

-Fortran

-Java

-Pascal

-ALGOL

-C

-C#

-C++

-Ensambladores
-BASIC

-COBOL

-Python

-Ruby

C es un lenguaje de bajo nivel
Un lenguaje de programación de características de bajo nivel o de primera generación, es aquel en el que sus instrucciones ejercen un control directo sobre el hardware y están condicionados por la estructura física de las computadoras que lo soportan. El uso de la palabra bajo en su denominación no implica que el lenguaje sea menos potente que un lenguaje de alto nivel, sino que se refiere a la reducida abstracción entre el lenguaje y el hardware

Todo el código debe estar dentro de una función.
C existe desde casi 50 años
Los ficheros C son el código fuente de tu programa
Tú necesitas compilar un fichero C con un compilador (por ejemplo gcc) para poder crear tu fichero ejecutable, ya que C es un lenguaje compilado
Por que usar C?
-Multiplataforma
-Eficiente
-Potente
-Es la base de otros lenguajes
Empezamos a codear:

//Hola mundo
#include <stdio.h>
int main(){    ((En el int declaramos la variable de tipo de dato "entero" seguido del nombre de la variable "main"))
    printf ("Hola mundo.");   ((printf es la funcion, la orden que le hacemos al programa en lenguaje C, para que nos imprima por pantalla lo que le ordenamos))
}

**COMPILAR:** Es hacer que el codigo que escribimos sea traducido para la computadora en binario y asi ella lo entienda
Salto de linea: para realizar un salto de linea se utiliza el siguiente comando “\n”

**NOTA:**
Para declarar distintas variables en una funcion seria de esta forma:

printf (“Valor de x: %i, n\Valor de y: %f. \n”,x,y);

Ejemplo:

//Hola Variables
#include <stdio.h>
int main(){
    int x; //declaracion de variable
    x = 5; //asignacion a variable o inicializacion 
    float y = 10.5;
        
        printf ("Valor de x: %i. \nValor de y: %f. \n",x,y);
 
    return 0;
}

**MACROS**
Se define: #define
Ejemplo: #define PI ((luego va el valor a asignar)) 3.1416

//Operaciones con variables y macros
#include <stdio.h>
#define PI 3.1416

int main (){
    float x = PI;
    printf ("El valor de X es: %f. \n",x);
    return 0;
}


<img src="/All_C/macro.jpeg">

**FUNCION DE ASIGNACION DE VALORES: "SCANF":**
En este proceso dejamos la variable sin asignacion de valor ya que el US se lo va a dar por medio de la funcion "scanf"
procedemos a declarar la funcion de esta manera:

scanf("%i",&y);
Scanf: funcion para solicitud de un valor. 
Luego procedemos con el argumento % para definir que viene un proceso funcional.
Luego el tipo de dato a recibir, en este caso es integer.
luego con el ampersand definimos un cubiculo de memoria en el cual el dato recibido va a ser guardado, como en este ejemplo la variable "y".

**GRAFICO:**
//Operaciones con variables y macros 
#include <stdio.h>
#define PI 3.1416

int main (){
    int y;
    float x = PI;
    printf("Introduce el valor de y: ");
    scanf("%i",&y);
    printf("El valor de y es: %i",y);

    return 0;
}

<img src="/All_C/scanf.jpeg">

**OPERACIONES CON VARIABLES:**
Realizaremos esta operacion: x * y = a... y le asignaremos ese valor ((resultado)) a la var x

**Ejemplo:**
 x = x * y;
Primero se ejecuta la operacion de la derecha que seria x * y, y luego asignaria el resultado a x ya que lo estamos indicando asi con el "x =".

**GRAFICO**

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

<img src="/All_C/operadores.jpeg">

**LIBRERIA MATH.H:**
Nos permite realizar operaciones tipo potencia
x = pow (x,y);

**AL COMPILAR HAY QUE USAR EL ARGUMENTO -lm, QUEDARIA ASI EL COMANDO gcc ((nombre de archivo)) -lm

**GRAFICO:**

#include <stdio.h>
#include <math.h> 
int main (){
    int x = 10, y = 2;
    x = pow(y,x);
    printf("El valor de y elevado a x es: %i. \n", x);
    return 0;
}

<img src="/All_C/potenia.jpeg">

 **METODO BURBUJA**
 Es un algoritmo diseñado para crear un espacio de memoria el cual albergue un valor y este no sea alterado por el proceso de la operacion.
 En este proceso veremos que tenemos un algoritmo para  darle el valor de x a y y viceversa, al ejecutar este algoritmo se mezclaran los r3esultados de manera erronea:

 <img src="/All_C/burbuja.jpeg">

 .

 Nos refleja este resultado:

 .
  <img src="/All_C/resultado.jpeg">

  .

  Para realizar correctamente este proceso debemos realizar este algoritmo con una variable auxiliar:

   <img src="/All_C/resultado1.jpeg">.


**ESTRUCTURAS SELECTIVAS**
Definimos una condicion con un "if", en este caso indicamos ((Si x es igual a 4 se ejecuta el proceso)):

if (x==4)  ((Para realizar una comparacion toca agregar los dos signos de igual, de lo contrario con 1 seria una asignacion))

**NOTA:**Todo lo que este dentro de los corchetes se ejecutara.


**GRAFICO**

<img src="/All_C/resultado2.jpeg">

Hay varios tipos de operadores de comparacion:

<img src="/All_C/resultado3.jpeg">

Operador <: Devuelve true si el primer valor es menor que el segundo.

Operador <=: Devuelve true si el primer valor es menor o igual que el segundo.

Operador >: Devuelve true si el primer valor es mayor que el segundo.

Operador >=: Devuelve true si el primer valor es mayor o igual que el segundo.

Operador ==: Devuelve true si los dos valores son iguales.

Operador <>: Devuelve true si los dos valores no son iguales.

**GRAFICO EJERCICIO:**

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

if: si ((pasa esto y se cumple la condicion el proceso continua))
else: si no se cumple la condicion ((pasa este otro proceso))

**ALGORITMO DEMOSTRACION MAS ESTRUCTURAS SELECTIVAS NUMEROS PARES E IMPARES**

#include <stdio.h>
int main (){
    int x,y;
    
        printf("Introduzca un numero:\n");
    
        scanf("%i",&x);

            y = x % 2;
            if(y==0){
                printf("El numero %i es par.\n",x);
            }
            else {
                printf ("El numero %i es impar.\n",x);
            }

        return 0;
}

**Aqui:**  if(y==0)

Definimos que si el resultado es igual a 0 es par porque termina en 0.

**Estructuras selectivas anidadas**
Esto significa estructuras dentro de otras estructuras

**GRAFICO:**

Tenemos un algoritmo en el que el susuario agrega 3 numeros y se le indica cual es el mayor

**EJEMPLO:**

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


<img src="/All_C/resultado4.jpeg">


**CONDICIONES MULTIPLES:**

 if(x >= 1 && x <= 10){
 }

 && ((las 2 condiciones deben de cumplirse))

 <img src="/All_C/resultado5.jpeg">

 **GRAFICO:**

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

<img src="/All_C/resultado6.jpeg">

**ALGORITMO QUE ACEPTE HORAS, MINUTOS Y SEGUNDOS Y DEVUELVA LA HORA QUE SERA DENTRO DE UN SEGUNDO:**
**GRAFICO:**

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


<img src="/All_C/resultado7.jpeg">







**OPERADORES RELACIONALES LOGICOS:**

O = ||.

Y = &&.

NEGACION = !.

IGUALDAD = =.

DESIGUALDAD = <>. !=.

**ESTRUCTURAS ITERATIVAS (bucles):**
Es la funcion que repite un numero de veces una parte del codigo. un numero de veces que nosotros controlaremos con una condicion.
**-Hay 3 tipos de bucles:**

*for - Para: Hace recorridos en diferentes operaciones de acuerdo a una cantidad de iteraciones especificadas.
((El bucle consta de 3 partes: 1. inicializar el contador. 2.se establece la condicion.))

*while - Mientras: 

*do while: Siempre se ejecuta al menos una vez


**Realizaremos un algoritmo que solicite dos numeros y luego muestre en pantalla todos los numeros comprendidos entre esos dos numeros CON EL BUCLE FOR**

**GRAFICO:**

#include <stdio.h>
int main (){
    int x, y, i; //la i es para definir las iteraciones del For
    
        printf("Introduzca un numero:\n");
            scanf("%i",&x);

        printf("Introduzca un numero mayor que el anterior:\n");
            scanf("%i",&y);


for(i = x + 1 ; i < y ; i++)//La primer funcion se realiza para indicar la cantidad de iteraciones del For, hay que dejar un punto y coma para luego poner la condicion 
 {
    printf("%i,",i);
 }
 printf ("\n");
}

**Realizaremos un algoritmo que solicite dos numeros y luego muestre en pantalla todos los numeros comprendidos entre esos dos numeros CON EL BUCLE WHILE**

**GRAFICO:**

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



 <img src="/All_C/resultado8.jpeg">

 **ALGORITMO CICLO FOR**


 #include <stdio.h>
int main (){

    int i;
    float suma; //Se declara de tipo flotante ya que el numero va a sobre pasar la cantidad de bits permitidos por el int.
    suma = 0;
    
    //En el bucle for primero realizamos la inicializacion, 
    for(i = 2 ; i <= 2000 ; i += 2){
        suma += i;
    }
    
    printf ("El resultado de la suma es: %i.\n",suma);
    
    return 0;
    }


 <img src="/All_C/resultado9.jpeg">


**ALGORITMO CICLO FOR**

#include <stdio.h>
int main (){
    int x, y, i;
    float suma;

    printf ("Introduce de cuantos numeros quieres calcular la media: ");
    scanf ("%i",&x);

    i = 0; //inicializamos el contador
    while (i < x) {  //Mientras i sea menor que x ((El contador solicitado))se ejecutara el programa
        printf("Introduce el %i numero:",i+1);//agregamos la variable de i para que este proceso se repita las veces solicitadas por x
        scanf("%i",&y);//los datos recogidos se almacenan en y
        suma += y;// proceso en el cual se suman los valores recopilados
        i++;
}
suma = suma / x; //el valor de suma va a ser los datos recopilados de suma / x
printf("El resultado de la media es: %f. \n", suma);
    return 0;
    }


**BUCLE DO WHILE**

El do while se ejecuta al menos una vez hasta que se cumpla la condicion establecida para parar.

#include <stdio.h>
int main (){
    int i = 10;

    do{
printf("Esto se ejecuta 1 vez al menos");
  i++;

    }while(i < 15);
  

    return 0;
    }



    **ALGORITMO CON CHAR**

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


<img src="/All_C/resultado10.jpeg">


**CONDICIONALES ANIDADAS**

<img src="/All_C/resultado11.jpeg">

**BUCLES ANIDADOS**

<img src="/All_C/resultado12.jpeg">


