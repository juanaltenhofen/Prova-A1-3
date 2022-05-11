#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



int main (){
	
	float quantidade ;
	float valorunidade, valormedio,  total , totalquant = 0 ,  centavos, cedulas, resto;
	int valorreais;
	char resposta = 'S';

	
	setlocale (LC_ALL, "Portuguese");
	system ("cls");

 while (resposta == 'S'){
     do  {
	
	printf ("Informe a quantidade de um produto: \n");
	scanf ("%f", &quantidade);
	totalquant = totalquant + quantidade;
	
	
	if (quantidade > 0 ){
	printf ("Informe o valor unitï¿½rio do produto: \n");
	scanf  ("%f", &valorunidade);
	
	   
	   	total = total + (valorunidade*quantidade);
    }
	} while (quantidade > 0);
    valormedio = total / totalquant;
    valorreais = floor(total);
    centavos = total - valorreais;

	

	printf ("VALOR TOTAL DA COMPRA: \n %.2f", total);

	printf ("\nVALOR MÉDIO DA COMPRA: \n %.2f", valormedio);

    printf("\n O valor total da compra eh %d reais e %.2f centavos.\n", valorreais, centavos);

    printf("\n%d reais equivale a:\n\n", valorreais);

	if (valorreais >= 100){
        cedulas = valorreais / 100;
		resto = valorreais % 100;
		valorreais = resto;

		printf("%.0f nota(s) de 100 R$ \n", cedulas);
	}
    
		if (valorreais >= 50){
        cedulas = valorreais / 50;
		resto = valorreais % 50;
		valorreais = resto;

		printf("%.0f nota(s) de 50 R$ \n", cedulas);
	}
        if (valorreais >= 20){
        cedulas = valorreais / 20;
		resto = valorreais % 20;
		valorreais = resto;

		printf("%.0f nota(s) de 20 R$ \n", cedulas);
	}
       	if (valorreais >= 10){
        cedulas = valorreais / 10;
		resto = valorreais % 10;
		valorreais = resto;

		printf("%.0f nota(s) de 10 R$ \n", cedulas);
	}
       	if (valorreais >= 5){
        cedulas = valorreais / 5;
		resto = valorreais % 5;
		valorreais = resto;

		printf("%.0f nota(s) de 5 R$\n", cedulas);
	}
      	if (valorreais >= 2){
        cedulas = valorreais / 2;
		resto = valorreais % 2;
		valorreais = resto;

		printf("%.0f nota(s) de 2 R$\n", cedulas);
	}
	   	if (valorreais >= 1){
        printf("%.0f meodas(s) de 1 R$ \n", cedulas);
	}
    printf (" \n Deseja repetir o programa [S|N] ? ");
	scanf ( "%s", &resposta);
}
	return 0;
}