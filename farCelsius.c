#include <stdio.h>

int main()
{
    int far; 
    printf ("Digite a temperatura: "); 
    scanf ("%d",&far); 
    int cel;
    cel = (far-32)*5/9;
    printf("%d", cel);
    return(0);
}