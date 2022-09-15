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
