#include <stdio.h>
#include <stdlib.h>


float sumar(int numero1, int numero2);
void mostrarpedir(void);
void leernumero(void);
int pediryleernumero(void);

float calcular(int numero1, char funcion, int numero2 );

int main()
{
    int num1;
    int num2;
    char funcion;
    float resultado;

    leernumero();
    mostrarpedir();

    printf("introduzca el primer numero\n");
    scanf("%d", &num1);

    printf("\nintroduzca la funcion\n");
    funcion =getche();
    mostrarpedir();
    //printf("\nintroduzca el segundo numero\n");
   //scanf("%d", &num2);
    num1=leernumero();




    switch(funcion)
        {

        case'+':
           resultado = sumar(num1,num2);
        break;
        case'-':
            resultado = num1-num2;
        break;
        case'*':
            resultado =num1*num2;
        break;
        case'/':
            resultado =(float)num1/num2;
        break;
        }
    printf("%f",resultado);
    return 0;
}

float sumar(int numero1, int numero2)
{
    float resultado;

    resultado=numero1+numero2;


    return resultado;
}
void mostrarpedir(void){
printf("ingrese un numero");

}
int leernumero(void){
int retorno;
pedir (void);
scanf("%d",leernumero())
}
