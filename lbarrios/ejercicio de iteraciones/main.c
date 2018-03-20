#include <stdio.h>
#include <stdlib.h>
//casteo
int main()
{
    int numero;
    char seguir= 's';
    int contpar= 0;
    int conttotal=0;
    int acumulador= 0;
    float promedio;
    int min;
    int max;
    int flag=0;



    while ( seguir =='s'){
        printf("ingrese un numero positivo\n");
        scanf("%d", &numero);

    while ( numero<=0){

    printf("reingrese un numero mayor a 0?\n");
    scanf("%d", &numero);
    }
    if (numero%2==0){
     contpar ++;
    }

    conttotal ++;
    acumulador += numero;

    /*if (flag == 0){
        max=numero;
        min=numero;
        flag = 1;
    }else

    if(numero>max){
        max=numero;
    }
    if(numero<min){
        min=numero;
    }
*/

    if(flag ==0 || numero>max)
    {
        max=numero;
    }
    if(flag ==0 || numero < min)
    {
        min=numero;
        flag =1;
    }

    printf("\n desea continuar?");
    seguir = getche();

    }
    promedio =(float)acumulador/conttotal;

    printf("cantidad de numeros pares: %d\n", contpar);
    printf("el promedio es: %f\n", promedio);
    printf("la suma es :%d\n", acumulador);
    printf("el maximo es :%d\n", max);
    printf("el minimo es :%d\n", min);



return 0;
}
