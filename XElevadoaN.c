#include <stdio.h>

int main()
{
    int x; 
    printf ("Digite um numero: "); 
    scanf ("%d",&x); 
    int n; 
    printf ("Digite outro numero: "); 
    scanf ("%d",&n); 
    int resultado=1;
    int i;
    for (i=1; i<=n; i++) 
        resultado = resultado * x;
    printf("%d",resultado);
    return(0);
}