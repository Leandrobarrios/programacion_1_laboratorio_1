#include <stdio.h>
#include <stdlib.h>

int pedirentero(char[], int min, int max);
int validarentero(int,int, int);

int main()
{
    int edad;
    int legajo;
    int nota;
    int resultado;

    edad = pedirentero("ingrese edad", 18 , 60);
    legajo = pedirentero("ingrese legajo",1,1500);
    nota = pedirentero("ingrese nota",1 , 10);

    return 0;
}

int pedirentero(char texto[], int min, int max)
{
    int retorno;

    printf("%s",texto);
    scanf("%d",&retorno);
    retorno=validarentero(retorno,min,max);

    return retorno;

}
int validarentero(int dato,int min, int max)
{

    while(dato<min||dato>max)
    {
    printf(" error !reingreseee");
    scanf("%d",&dato);
    }

    return dato;
}
