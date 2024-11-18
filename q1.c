#include<stdio.h>
#include<string.h>

void password(char sentence[50], int end, int start){
	if(start >= end){
		return;
	}
	char temp = sentence[end - 1];
	sentence[end - 1] = sentence[start];
	sentence[start] = temp;
	
	password(sentence, end - 1, start + 1);
}

void main(){
	char sentence[50];
	printf("Enter a sentence: ");
	scanf("%[^\n]", &sentence);
	password(sentence, strlen(sentence), 0);
	printf("%s", sentence);
}