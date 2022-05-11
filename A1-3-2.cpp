#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main (void){
	
	
	setlocale (LC_ALL, "Portuguese");
	
	char R1, R2;
	int temp;
	
	  printf ("Paciente se sente bem ? [S/N] \n ");
	  scanf (" %c", &R1);
	
	
     if (R1 == 'S'){
	    printf ("Saudável ");

    }else if (R1 == 'N'){
	printf ("Paciente tem dor ? [S/N] \n ");
		scanf (" %c", &R2);
	} if (R2 == 'S'){
		printf ("Doente ");
	}else if (R2 == 'N'){
		printf ("Temperatura do paciente : \n");
		scanf ("%d", &temp);
	} if (temp > 37){
		printf ("Doente ");
	}
	else if (temp <=37){
		printf ("Saudável");
	}
	
	
	
	
	
	return 0;
}
