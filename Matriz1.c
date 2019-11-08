#include <stdio.h>
int main(){
	
	int test[2][2],i,j,cont=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Elementos [%d][%d]: ",i,j);
			scanf("%d", &test[i][j]);
			
			if(test[i][j]>10){
			cont++;
					}
			}
		}
	
	printf("%d", cont);
	
	system('pause');
	return 0;
}
