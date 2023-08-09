#include <stdio.h>

int main(){
	int i = 0;
	int a = 3;
	
	int fat = 1;
	for(i=1;i<=a;++i){
		fat *= i;
	}
	
	printf("!A:%d", fat);

}

