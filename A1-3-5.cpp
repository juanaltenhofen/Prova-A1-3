#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main (void){
	
	int num, nummagico, tentativas =0 ;
    char resposta;
	
	setlocale (LC_ALL, "Portuguese");
	srand(time(NULL));
	nummagico = rand () % 11 ;
	
	do {
		tentativas ++;
		printf (" Tentativa n�mero %d", tentativas);
		printf ("\n Adivinhe o n�mero m�gico: ");
		scanf ("%d", &num);
		
		if (num == nummagico){
			printf (" Certo ! %d � o n�mero m�gico", nummagico);
			break;
		}
		if (num > nummagico ){
			printf ("Errado, muito alto ");
		}
		else {
			printf ("Errado, muito baixo ");
		}
		printf ("Mais uma tentativa ? [S/N]");
		scanf (" %c", &resposta);
		
		
	} while (resposta == 'S');
	
	
	
	
	
	
	return 0;
}
