#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int tam= 5;
	char frase[tam]="Alan";
	char fraseInvertida[tam];
	
	//char aux[200];
	
	printf("Digite uma frase :");
	gets(frase);
	tam--;
	for(int i=0; i <= tam; i++){
		fraseInvertida[i]=frase[tam - i];
	}
	
	printf("Essa é sua frase invertida :");
	puts(fraseInvertida);
	printf("Esssa foi sua frase original : ");
	puts(frase);
	
	
	
	return 0;
}
