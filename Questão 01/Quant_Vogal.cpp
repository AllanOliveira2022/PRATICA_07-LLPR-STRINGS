#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	char frase[300];
	int vogal=0;
	
	printf("Digite uma frase qualquer : ");
	gets(frase);
	
	for(int i=0; i < 300; i++){
		if((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')){
			vogal++;
		}
		if(frase[i] == '\0'){
			break;
		}
	}
	printf("Sua frase foi : ");
	puts(frase);
	printf("Existem %d vogais na sua frase ! \n", vogal);
	
	
	return 0;
}	
