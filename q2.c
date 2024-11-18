#include<stdio.h>

void percentage(int x, int i){
	if(i > 100){
		return;
	}
	float calc = ((float)i / 100) * x;
	printf("%d Percent = %.2f\n", i, calc);
	percentage(x, i + 1);
}

void main(){
	int x;
	printf("Enter a Number: ");
	scanf("%d", &x);
	percentage(x, 1);
}