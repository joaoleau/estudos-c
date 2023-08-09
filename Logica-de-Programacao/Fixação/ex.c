#include <stdio.h>
#include <conio.h>

#define VALOR 3
int i,j;
int k = 0;

void print(float nums[], int valor){
	for(i=0;i<valor;++i){
		printf("%f ", nums[i]);
	}
}

void ordination(float nums[]){
	float maior;
	for(i=0;i<VALOR;++i){
		for(j=i+1;j<VALOR;++j){
			if(nums[i]>=nums[j]){
				maior = nums[i];
				nums[i] = nums[j];
				nums[j] = maior;
			}
		}
	}
}


void menor(float nums[]){
	ordination(nums);
	if(nums[0] == nums[1]){
		printf("São valores iguais e menores %f", nums[0]);
	}
}

void maior(float nums[]){
	ordination(nums);
	if(nums[VALOR-1] == nums[VALOR-2]){
		printf("São valores iguais e maiores %f", nums[VALOR-1]);
	}
}

void cubo(float nums[]){
	for(i=0;i<VALOR;++i){
		nums[i] *= nums[i];
	}
	if (nums[VALOR-1]>1000){
		return;
	}else{
		print(nums, VALOR);
	}
}


int main(){
float nums[VALOR];
for(i=0;i<VALOR;++i){
	float n;
	printf("Digite o %d valor: ", i+1);
	scanf("%f", &n);
	if (n<0){
		printf("Não pode valores negativos!!\n");
		--i;
	}else{nums[i] = n;
	}
	
}
ordination(nums);
//print(nums, VALOR);printf("\n");
menor(nums);
maior(nums);
cubo(nums);
//printf("\n");
//print(nums, k);
	
}

