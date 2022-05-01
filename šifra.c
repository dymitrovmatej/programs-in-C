#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void caesarCipher(char* plainText, int key);

int main(void){
	
	int key = 1;
	char plainText[101];
	
	printf("Zadejte text který chcete zašifrovat: ");
	
	fgets(plainText, sizeof(plainText), stdin);
	
	printf("Zašifrovaný text:");
	
	caesarCipher(plainText, key);
}

void caesarCipher(char* plainText, int key){
	
	int i=0;
	int cypherValue;
	char cypher;
	
	while( plainText[i] != '\0' && strlen(plainText)-1 > i){
		cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
		cypher = (char)(cypherValue);
		
		printf("%c", cypher);
		i++;
	}
	printf("\n");
}