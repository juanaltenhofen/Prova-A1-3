#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int i, num, cont = 0;
    char resposta = 's';
    system ("cls");
    setlocale (LC_ALL, "Portuguese");
   do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);
        printf("\n");

        for (i = 0; i <= num; i++)
        {
            cont++;
            for (i = 0; i < cont; i++)
            {
                printf("%d  ", cont);
            }
            printf("\n");
        }

        printf("\n");
        printf("Deseja digitar outro numero |S ou N| : ");
        scanf(" %c", &resposta);
        printf("\n");
        
    } while (resposta == 's');

    return 0;
}
