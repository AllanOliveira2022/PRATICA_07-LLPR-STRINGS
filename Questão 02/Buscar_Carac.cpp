#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	char frase[300];
	char carac;
	int quant=0;
	
	 printf("Digite uma frase qualquer : ");
	 gets(frase);
	 
	 printf("Digite uma letra para procurar : ");
	 scanf("%c", &carac);
	 
	 for(int i=0; i < 300; i++){
	 	if(frase[i] == carac){
	 		quant++;
		 }
	 }
	 
	 printf("Sua frase é : ");
	 puts(frase);
	 printf("\n");
	 printf("Seu caractere '%c' se repetiu %d vezes na frase\n", carac,quant);
	
	return 0;
}
