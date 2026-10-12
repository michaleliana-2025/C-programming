#include <stdio.h>

int main()
{
    int num, originalNum;
    int firstDigit, lastDigit, middleDigits, divisor = 1;
    int newNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10 && num > -10) {
        printf("The new number is: %d\n", num);
        return 0;
    }

    originalNum = num;

 
    lastDigit = num % 10;

    
    while (num >= 10) {
        num = num / 10;
        divisor = divisor * 10;
    }
    firstDigit = num;

    middleDigits = (originalNum % divisor) / 10;

    newNum = (lastDigit * divisor) + (middleDigits * 10) + firstDigit;

    printf("The new number after swapping the first and last digits is: %d\n", newNum);

    return 0;
}