#include <stdio.h>

int main(void) {
	int min, max, i, j, primo, numlinha;
    char resposta = 'S';
    system ("cls");
while (resposta == 'S'){

    printf ("Informe o limite inferior do intervalo: ");
	scanf("%d", &min);
    printf ("\n Informe o limite superior do intervalo: ");
    scanf ("%d", &max );
    printf ("Informe quantos números deseja imprimir por linha :");
    scanf ( " %d", &numlinha);

	for (i = min; i <= max; i++) {
      
      
		if (i == 0 || i == 1) {
		
			primo = 0;
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) { 
				if (i % j == 0) {
					primo = 0; 
				}
			}
		}
		if (primo == 1) {
			printf("%i ", i);
		}
	}

    printf (" \n Deseja repetir o programa ? |S | N | ");
    scanf ("%s", &resposta);
}  getchar ();
	return 0;
}