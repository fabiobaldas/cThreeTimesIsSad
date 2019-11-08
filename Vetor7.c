#include <stdio.h>
#define tam 5
int main(){
	
	int vA[tam],vB[tam],vC[10],i,j=0;
	
	for(i=0;i<tam;i++){
		printf("Digite o vetorA[%d]: ",i);
		scanf("%d", &vA[i]);
	}
	
	for(i=0;i<tam;i++){
		printf("Digite o vetorB[%d]: ",i);
		scanf("%d", &vB[i]);
	}
	
	for(i=0;i<tam;i++){
		vC[i] = vA[i];
	}
	
	for(i=5;i<10;i++,j++){
		vC[i] = vB[j];
	}
	
	for(i=0;i<10;i++){
		printf("%d", vC[i]);
	}
	getch();
	return 0;
}
