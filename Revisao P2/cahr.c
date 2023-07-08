#include <stdio.h>
#include <string.h>

char letters[3][10] = {{"Paaii"}, {"Amor"}, {"Baby"}};
int i, j;

//Ordem alfabetica a,b,c...
void ord(char words[3][10]){
	for(i=0; i<3; ++i){
		for(j=i+1; j<3; ++j){
			if(strcmp(words[i], words[j]) >= 0){
				char maior[10];
				strcpy(maior, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], maior);
			}
		}
	}
}

int main(){
	ord(letters);
	
	for(i=0; i<3; ++i){
		printf("%s ", letters[i]);	
	}
	
}

