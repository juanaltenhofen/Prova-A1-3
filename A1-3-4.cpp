#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main (void){
	
	int num1, num2;  //troca de vari�vel para inteiro, pois o operador % n�o aceita n�meros reais 
	int resto;
	setlocale (LC_ALL, "Portuguese");
	
	printf("\n Informe o primeiro valor: ");
	scanf ("%d", &num1);
	printf ("\n Informe o segundo valor: ");
	scanf ("%d", &num2);
	
	if (num1 == 0  || num2 == 0 ){  //verificando se o divisor n�o � 0 antes de dar sequ�ncia com as possibilidades.
	 
	 	printf("\n N � possivel realizar divis�o por zero \n");
    }
	else if (num2 > num1 )   {   //retirando o comando else, pois ele n�o � necess�rio aqui  !
	
		resto = num2 % num1 ;
			printf ("\n O resto da divis�o � %.1d" ,resto);
	}
	else if (num1 > num2 )	{
	
	   	resto = num1 % num2 ;
			printf ("\n O resto da divis�o � %.1d" ,resto);	 
	
	}

	return 0;
}
