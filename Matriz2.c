#include <stdio.h>
int main(){
	
	int m[3][3],linha,coluna;
	int maior = 0,onde_linha, onde_coluna;
	
	// PEGANDO AS LINHAS E COLUNAS
	
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
		printf("Elementos [%d][%d]: ",linha,coluna);
		scanf("%d", &m[linha][coluna]);
		}
	}
	
	// PRINTANDO AS COLUNAS E LINHAS
	
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
		printf("Elementos [%d][%d] = [%d]\n",linha,coluna,m[linha][coluna]);
		
		//BUSCANDO 
		
		if(m[linha][coluna] > maior){
			maior = m[linha][coluna];
			onde_linha = linha;
			onde_coluna = coluna;
			}
		}
		printf("\n");
	}
	
	printf("Encontrando o valor [%d] na linha [%d] e coluna [%d]", maior, onde_linha, onde_coluna);
	return 0;
}
