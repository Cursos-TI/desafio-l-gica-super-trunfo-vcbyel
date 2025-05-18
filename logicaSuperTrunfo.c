#include <stdio.h>

int main() {
    
    //declarando variaveis primeira carta
char estado[100];
char codigo[100];
char cidade[100];
int populacao;
float area;
float pib;
int numero;
float densidadepop;
float pibpercapita;





//primeira parte da estruturação da 1º carta

printf ("\n---Insira Dados da Primeira Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado);

    printf ("Código da Carta:");
    scanf("%s", codigo);

    printf ("Cidade:");
    scanf("%s", cidade);

    printf ("População:");
    scanf("%d", &populacao);

    printf ("Área Total: ");
    scanf("%f", &area);
    
    printf ("PIB:");
    scanf("%f", &pib);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero);
    
    // calculos carta 1
    
    densidadepop = (float) populacao / area; // aqui esta a formula da divisao entre duas variaves ! densidade populacional
    
    pibpercapita = (float) pib / populacao; // aqui esta a formula da divisao para achar o pib percapita-
    
     
 
    
    
     
      //------------------------ separação segundo codigo-----------------------------------
    
    //declarando variaveis segunda carta
    char estado2[100];
char codigo2[100];
char cidade2[100];
int populacao2;
float area2;
float pib2;
int numero2;
float densidadepop2;
float pibpercapita2;


//primeira parte da estruturação da 2º carta

printf ("\n---Insira Dados da Segunda Carta---\n");

printf ("Digite seu Estado:");
    scanf("%s", &estado2);

    printf ("Código da Carta:");
    scanf("%s", codigo2);

    printf ("Cidade:");
    scanf("%s", cidade2);

    printf ("População:");
    scanf("%d", &populacao2);

    printf ("Área Total: ");
    scanf("%f", &area2);
    
    printf ("PIB:");
    scanf("%f", &pib2);
    
    printf ("Número de pontos Turísticos: ");
    scanf("%d", &numero2);
    
    densidadepop2 = (float) populacao2 / area2; // aqui esta a formula da divisao entre duas variaves ! densidade populacional - segunda carta
        
    pibpercapita2 = (float) pib2 / populacao2; // aqui esta a formula da divisao para achar o pib percapita- segunda carta
   
    
    
    
       
    
    // Impressão primeira carta
    printf("\n--- Dados da primeira carta ---\n");
    printf("Estado: %s.\n.", estado);
    printf("Código: %s.\n", codigo);
    printf("Cidade: %s.\n", cidade);
    printf("População: %d.\n", populacao);
    printf("Área: %.2f km².\n", area);
    printf("PIB: %.2f\n.", pib);
    printf("Nº de Pontos Turísticos: %d\n.", numero);
    printf("Densidade populacional: %f\n.", densidadepop);
    printf("Pib Percapita: %f\n.", pibpercapita);
    printf("Densidade populacional: %f\n", densidadepop); // coloquei para imprimir na primeira tela como um dado adicional, para o jogar ficar ciente que tem esse dado
    printf("Pib Percapita: %f\n", pibpercapita); // aqui tambem coloquei para imprimir para ficar ciente desse dado adicional
    
    
     // Impressão segunda carta
    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %s.\n", estado2);
    printf("Código: %s.\n", codigo2);
    printf("Cidade: %s.\n", cidade2);
    printf("População: %d.\n", populacao2);
    printf("Área: %.3f km².\n", area2);
    printf("PIB: %.2f.\n", pib2);
    printf("Nº de Pontos Turísticos: %d.\n", numero2);
    printf("Densidade populacional: %f\n.", densidadepop2);
    printf("Pib Percapita: %f\n.", pibpercapita2);
    
    
   

    
    // comparação carta 1 e 2 com if e else 
    printf("\n--- Comparação das cartas ---\n");
    //primeiro bloco
    if (populacao > populacao2) {
    	printf("População: Carta 1 venceu! %d\n", populacao);
	  } else {
		printf("População: Carta 2 venceu! %d\n", populacao2);
	  }// fim do primeiro bloco
      
	if (area > area2) { //inicio 
		printf("Area total: Carta 1 venceu! %.2\n", area);
	}   else {
		printf("Area total: Carta 2 venceu! %.2f\n", area2);
	} // fim

    if (pib > pib2) { //inicio 
    	printf("PIB: Carta 1 venceu! %.2f\n", pib);
	}   else {
		printf("PIB: Carta 2 venceu! %.2f\n", pib2);
	} // fim
	if (numero > numero2) { //inicio 
		printf("Numero Pontos turisticos: Carta 1 Venceu! %d\n", numero);
	}   else {
		printf("Numero Pontos turisticos: Carta 2 venceu! %d\n", numero2);
	} // fim
    if (densidadepop < densidadepop2) { //inicio 
    	printf("Densidade popular: Carta 1 venceu! %.2f\n", densidadepop);
	}   else {
		printf("Densidade popular: Carta 2 venceu! %.2f\n", densidadepop2);
	} // fim
    if (pibpercapita > pibpercapita2) { //inicio 
    	printf("Pib percapita: Carta 1 venceu! %.2f\n", pibpercapita);
	}   else {
		printf("Pib percapita: Carta 2 venceu! %.2f\n", pibpercapita2);
	} // fim
    
    
   
    
     return 0;

}