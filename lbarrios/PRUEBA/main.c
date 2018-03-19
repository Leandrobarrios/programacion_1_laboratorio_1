#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    /*
    int = entero (%d)
    ficat = tiene numeros decimales (%f)
    char = tiene 1 solo caracter (%c)
    */
    int numero1;
    float numero2;
    float suma;
    char letra;

    printf("ingrese el primer numero:");
    scanf("%d", &numero1);
    // scanf es para mostrar numeros enteros y numeros decimales

    printf("ingrese el segundo numero:");
    scanf("%f", &numero2);
    printf("ingrese una letra\n");
    //fflush(stdin);//limpia el bufer asi puedo continuar
    letra = getche();
    letra = toupper(letra);// pasa a mayuscula la variable

    suma = numero1 + numero2;




    printf("la suma de los 2 numeros es : %f\n", suma );
    printf(" la letra ingresada es :%c", letra);
    return 0;
}
