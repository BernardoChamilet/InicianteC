#include <stdio.h>

int main()
{
    int num; 
    printf ("Digite um numero: "); 
    scanf ("%d",&num); 
    int resultado=1;
    int resto;
    int i;
    for (i=2; i<num; i++){
        resto = num%i;
        if (resto == 0)
        {
            resultado = 0;
        }
    }
    if (resultado == 1)
    {
        printf("É primo");
    }
    else 
    {
        printf("Não é primo");
    }
    return(0);
}