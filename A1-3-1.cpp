#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	char categoria;
    float quantidade, soma, total;
	float media;
	
	do{
	
	
		printf ("Informe a categoria : ");
		scanf (" %c", &categoria);
		
	if (quantidade >= 0){
		printf ("Informe a quantidade :");
	scanf ("%f", &quantidade);
	
	}
	   soma = soma + quantidade;
	   total ++;
	   media = ((float) soma / total);
	   
		   
		   
			   }	
		while (categoria == 'A'  || categoria == 'B'  ||  categoria == 'C');
	printf ("A média dos produtos eh %.f",media);
	
	
	
	
	
	
	
	return 0;
}
