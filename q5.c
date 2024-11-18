#include <stdio.h>

int sumDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumDigits(num / 10);
}

void main() {
    int numb;
    printf("Enter a number: ");
    scanf("%d", &numb);
    
	printf("The sum of the digits of %d is: %d\n", numb, sumDigits(numb));

}
