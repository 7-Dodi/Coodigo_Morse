#include <stdio.h>
#include <string.h>
void morse (char letra){  //Alfabeto convertido em MORSE
	switch(letra){
		case 'a': printf("*-");break;
		case 'b': printf("-***");break;
		case 'c': printf("-*-*");break;
		case 'd': printf("-**");break;
		case 'e': printf("*");break;
		case 'f': printf("**-*");break;
		case 'g': printf("--*");break;
		case 'h': printf("****");break;
		case 'i': printf("**");break;
		case 'j': printf("*---");break;
		case 'k': printf("-*-");break;
		case 'l': printf("*-**");break;
		case 'm': printf("--");break;
		case 'n': printf("-*");break;
		case 'o': printf("---");break;
		case 'p': printf("*--*");break;
		case 'q': printf("--*-");break;
		case 'r': printf("*-*");break;
		case 's': printf("***");break;
		case 't': printf("-");break;
		case 'u': printf("**-");break;
		case 'v': printf("***-");break;
		case 'w': printf("*--");break;
		case 'x': printf("-**-");break;
		case 'y': printf("-*--");break;
		case 'z': printf("--**");break;
		case ',': printf("--**--");break;
		case '.': printf("*-*-*-");break;
		case '?': printf("**--**");break;
		case '!': printf("-*-*--");break;
		case 0: printf("-----");break;
		case 1: printf("*----");break;
		case 2: printf("**---");break;
		case 3: printf("***--");break;
		case 4: printf("****-");break;
		case 5: printf("*****");break;
		case 6: printf("-****");break;
		case 7: printf("--***");break;
		case 8: printf("---**");break;
		case 9: printf("----*");break;
		default: printf("/");break;
	}
}
void main(){
	char frase[50]; //Declarção da variável
	printf("\n############### COODIGO MORSE ###############\n"); //Explicação do programa
    printf("\nInforme o nome que deseja converter para Codigo Morse;\nUse letras minisculas;\nO limete maximo de caracteres eh 50.\n");
	printf("\n#############################################\n");
	printf("\nTudo certo.... clique em qualquer tecla para iniciar"); //Pausa controlada pelo usuario
	getch();
	printf("\n\n##################### ENTRADA ######################"); //Entrada das informações
	fflush(stdin);
	printf("\n\nInforme a palavra ou frase que deseja conveter:");
	gets(frase);
	int tam= strlen(frase); //Leitura da quantidade de letras da palavra ou frase
	int k;
	printf("\n\n################# RESULTADO #################\n");
	printf("\nPalavra ou frase informada: %s", frase); //Dado no alfabeto original
	printf("\n\nCodigo em Morse:\n"); 
	for(k=0;k<tam;k++){
		morse (frase[k]); //Chamada da função para converter o dado 
	}
	printf("\n\nPrograma sendo encerrado...");
	getch();
}
