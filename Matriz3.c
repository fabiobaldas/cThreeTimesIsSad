#include <stdio.h>
int main(){
	
	int mA[3][3],mB[3][3],aux[3][3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("MatrizA [%d][%d]: ",i,j);
			scanf("%d", &mA[i][j]);
		}
	}
		
		printf("\n");
		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("MatrizB [%d][%d]: ",i,j);
			scanf("%d", &mB[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			aux[i][j] = mA[i][j]+ mB[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("A soma das duas matrizes [%d][%d] foram: %d \n",i,j, aux[i][j]);
		}
	}
	
	printf("\n");
	
	getch();
	return 0;
}
