#include <stdio.h>
#include <conio.h>

int main(){
	int i,j, fat, a[5], b[5];
	i=0;
	
	printf("Digite os valores da matriz \n");
	for(i=0;i<5;++i){
		scanf("%i", &a[i]);
	}
	//a[0]=5
	for(i=0;i<5;++i){ //Percorrendo a matriz
		//printf("%i\n", a[i]);
		
		fat=a[i];		
		for(j=1;j<a[i];++j){
			fat = fat*j;
		}
		
		if(fat>=20){
			b[i]=fat;
			printf("%i\n", b[i]);
		}
		

	}
	

	

}
