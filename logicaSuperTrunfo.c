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
int opcao; // criei uma variavel opção para criar o menu principal.
int atributo;
int resultadogeral;

	printf("Menu principal\n");
	printf("1. Iniciar Jogo \n");
	printf("2. Ver Regras\n");
	printf("Escolha uma opção: ");
	scanf("%d", &opcao);

switch (opcao) {

//primeira parte da estruturação da 1º carta
case 1:
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
   


       	
    
    //comparando as cartas
    
    	printf("\n---Escolha qual atributo a comparar!---\n");
	printf("1. População:\n");
	printf("2. Área:\n");
	printf("3. PIB\n");
	printf("4. Numero pontos turísticos\n");
	printf("5. Densidade Populacional\n");
	printf("6. Pib percapita\n");
	printf("Digite um numero");
	scanf("%d", &atributo); // criei uma variavel atributo para poder criar essa estrutura switch
	
	switch (atributo){
		case 1:
		if (populacao > populacao2) {
		printf("Cidade: %s vs %s.\n", cidade, cidade2);
    	printf("População: %s %d pontos vs %s %d pontos!\n",cidade, populacao, cidade2, populacao2);
    	printf("População: %s venceu!\n", cidade);
    	
    	
	  } else if (populacao < populacao2) {
		
		printf("Cidade: %s vs %s.\n", cidade2, cidade);
    	printf("População: %s %d pontos vs %s %d pontos!\n",cidade2, populacao2, cidade, populacao);
    	printf("População: %s Venceu!\n", cidade2);
		
	  } else {
	  	printf("Houve um empate \n");
	  }
	   break;
	   
	  

   case 2:
    
if (area > area2) {
		printf("Cidade: %s vs %s.\n", cidade, cidade2);
    	printf("Área em km²: %s %.2f pontos vs %s %.2f pontos!\n",cidade, area, cidade2, area2);
    	printf("Área em km²: %s venceu!\n", cidade);
    	
    	
	  } else if (area < area2) {
		
		printf("Cidade: %s vs %s.\n", cidade2, cidade);
    	printf("Área em km²: %s %.2f pontos vs %s %.2f pontos!\n",cidade2, area2, cidade, area);
    	printf("Área em km²: %s venceu!\n", cidade2);
		
	  } else {
	  	printf("Houve um empate \n");
	  }
	  break;
	  

	case 3:
	
	if (pib > pib2) {
			printf("Cidade: %s vs %s.\n", cidade, cidade2);
    	printf("PIB: %s %.2f pontos vs %s %.2f  pontos!\n",cidade, pib, cidade2, pib2);
    	printf("PIB: %s venceu!\n", cidade);
    	
    	
	  } else if (pib < pib2) {
		
		printf("Cidade: %s vs %s.\n", cidade2, cidade);
    	printf("PIB: %s %.2f pontos vs %s %.2f  pontos!\n",cidade2, pib2, cidade, pib);
    	printf("PIB: %s venceu!\n", cidade2);
		
	  } else {
	  	printf("Houve um empate \n");
	  }
	  break;
	
	case 4:
		
	if (numero > numero2) {
		printf("Cidade: %s vs %s.\n", cidade, cidade2);
    	printf("Numero pontos turisticos: %s %d pontos vs %s %d pontos!\n",cidade, numero, cidade2, numero2);
    	printf("Numero pontos turisticos: %s venceu!\n", cidade);
    	
    	
	  } else if (area < area2) {
		
		printf("Cidade: %s vs %s.\n", area2, area);
    	printf("Numero pontos turisticos: %s %d pontos vs %s %d pontos!\n",cidade2, numero2, cidade, numero);
    	printf("Numero pontos turisticos: %s venceu!\n", cidade2);
		
	  } else {
	  	printf("Houve um empate \n");
	  }
	  break;
	  
	case 5:
		
    if (densidadepop < densidadepop2) {
    	 densidadepop2 = (int) populacao / area;
    	printf("Cidade: %s vs %s.\n", cidade, cidade2);
    	printf("Densidade Populacional: %s %.2f pontos vs %s %.2f pontos!\n",cidade,densidadepop, cidade2, densidadepop2);
    	printf("Densidade Populacional: %s venceu!\n", cidade);
    	
    	
	  } else if (densidadepop > densidadepop2) {
		 densidadepop2 = (int) populacao2 / area2;
		printf("Cidade: %s vs %s.\n", area2, area);
    	printf("Densidade Populacional: %s %.2f pontos vs %s %.2f pontos!\n",cidade2, densidadepop2, cidade, densidadepop);
    	printf("Densidade Populacional: %s venceu!\n", cidade2);
		
	  } else {
	  	printf("Houve um empate \n");
	  }
	  break;
	  
	case 6:
		
    if (pibpercapita > pibpercapita2) {
    	pibpercapita = (int) pib / populacao;
    	printf("Cidade: %s vs %s.\n", cidade, cidade2);
    	printf("Pib percapita: %s %.2f pontos vs %s %.2f pontos!\n",cidade, pibpercapita, cidade2, pibpercapita2);
    	printf("Pib percapita: %s venceu!\n", cidade);
    	
    	
	  } else if (densidadepop > densidadepop2) {
		pibpercapita2 = (int) pib2 / populacao2;
		printf("Cidade: %s vs %s.\n", area2, area);
    	printf("Pib percapita: %s %.2f pontos vs %s %.2f pontos!\n",cidade2, pibpercapita2, cidade, pibpercapita);
    	printf("Pib percapita: %s venceu!\n", cidade2);
		
	  } else {
	  	printf("Houve um empate \n");
	  }
	  break;
		
		default:
			printf("Opção invalida\n");
			break;
	}


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
 
case 2:
	printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
	break;

default:
	printf("Opção invalida!\n");
}
 return 0;
 
}
