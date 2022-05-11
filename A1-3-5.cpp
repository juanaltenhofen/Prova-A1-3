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
		printf (" Tentativa número %d", tentativas);
		printf ("\n Adivinhe o número mágico: ");
		scanf ("%d", &num);
		
		if (num == nummagico){
			printf (" Certo ! %d é o número mágico", nummagico);
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
