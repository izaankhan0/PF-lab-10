#include<stdio.h>
#include<string.h>

void strReverse(char sentence[50], int start, int end){
	if(start >= end){
		return;
	}
	
	char temp = sentence[start];
	sentence[start] = sentence[end - 1];
	sentence[end - 1] = temp;
	strReverse(sentence, start + 1, end - 1);
}

void main(){
	char sentence[50];
	printf("Enter String: ");
	scanf("%[^\n]", &sentence);
	strReverse(sentence, 0, strlen(sentence));
	printf("%s", sentence);
}