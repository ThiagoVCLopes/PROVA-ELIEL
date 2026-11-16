#include<stdio.h>
int i,senha, senhacad, tab, res; 
float dig1, dig2, soma, subt, mult, divi;
char ope;
int main(){
	
		printf("THIAGO VINICIUS CALDEIRA LOPES 26013297-2");
		
		
		
		
		printf("QUESTAO 1\n\n");
		printf("CALCULADORA SIMPLES\n");
		printf("-------------------\n");
		
		printf("Digite o primeiro numero: \n");
		scanf ("%f", &dig1);
	
		printf("Digite o segundo numero: \n");
		scanf ("%f", &dig2);
	
	
		soma = dig1 + dig2;
		printf("RESULTADO DA SOMA: %.2f\n", soma);
	
		subt = dig1 - dig2;
		printf("RESULTADO DA SUBTRACAO: %.2f\n", subt);
	
		mult = dig1 * dig2;
		printf("RESULTADO DA MULTIPLICACAO: %.2f\n",mult);
	
		divi = dig1 / dig2;
		printf("RESULTADO DA DIVISAO: %.2f\n", divi);
	
		printf("\nQUESTAO 2\n\n");
	
		for (i=1;i<=10;i++){
			printf("%d\n", i);
		}
		
		printf("\nQUESTAO 3\n\n");
		
		i=1;
		while (i<=5){
			printf("%d\n", i);
			i++;
		}
		
		
		printf("\nQUESTAO 5\n\n");
		
		for (i = 1; i <= 5; i++) {
        	printf("%d\n", i);
    	}
    	
		printf("\nQUESTAO 6\n\n");
		
		int x = 5;

    	if (x > 3) {
        	printf("Maior que 3\n");
    	} else {
        printf("Menor ou igual a 3\n");
    	}
    	
    	printf("\nQUESTAO 8\n\n");
    	
    	printf("TABUADA\n");
    	printf("ESCOLHA UM NUMERO: \n");
    	scanf("%d",&tab);
    	
    	for (i=1;i<=10; i++){
    		res = tab * i;
    		printf("%d x %d = %d\n",tab, i,res);
		}
		
		printf("\nQUESTAO 9\n\n");
		i = 1;
		res = 0;
		
		while (i<= 5){
			res = res + i;
			i++;
		} 
		printf("RESULTADO DA SOMA: %d\n", res);
		
		printf("\nQUESTAO 10\n\n");
		
		for (i = 1; i<= 20;i++){
			if (i % 2 == 0){
				printf("%d\n", i);
			}
		}
		

		printf("\nQUESTAO 4\n\n");
		
		printf("CADASTRE UMA SENHA NUMERICA: \n");
		scanf("%d\n",&senhacad);
		
		i = 2;
			
		do {
			printf("INSIRA SUA SENHA: ");
			scanf("%d\n",&senha);
			
			if (senha == senhacad){
				i = 1;
			} else {
				i = 2;
			}
			
		} while (i != 1);
		
		printf("ACESSO LIBERADO!");
		

		
		
	return 0;
}
