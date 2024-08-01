#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[10]; 
    char frase[50];
    printf ("Digite uma palavra: "); 
    scanf ("%s",palavra);
    getchar();
    printf("Digite uma frase: ");
    scanf("%[^\n]",frase);
    getchar();
    int cont = 0;
    int cont2 = 0;
    int apareceu = 0;
    int tamanhoFrase = strlen(frase);
    int tamanhoPalavra = strlen(palavra);
    while (cont<tamanhoFrase){
        if (frase[cont] == palavra[cont2]){
            cont2 ++;
            cont ++;
            if (cont2 == tamanhoPalavra){
                apareceu ++;
                cont2 = 0;
                if (frase[cont - 1] == palavra[cont2]){
                    cont --;
                }
            }
        }
        else{
            cont = cont - cont2 + 1;
            cont2 = 0;
        }
    }
    printf("%d",apareceu);
    return(0);
}