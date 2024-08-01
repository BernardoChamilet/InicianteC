#include <stdio.h>

int main()
{
    int num; 
    printf ("Digite um numero: "); 
    scanf ("%d",&num); 
    int cont = 1;
    int cont2 = 0;
    while (cont2<num){
        if (cont%2 != 0)
        {
            printf("%d ",cont);
            cont2 = cont2 + 1;
        }
        cont = cont + 1;
    }
    return(0);
}