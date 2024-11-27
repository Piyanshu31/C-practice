#include <stdio.h>

int main()
{
    int number,divisor;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
  if (number >= 1000 && number <= 9999) {
        int divisor = 1000;
        for (int i = 0; i < 4; i++) {
            int digit = (number / divisor) % 10;
            printf("%d\n",digit);
            divisor /= 10;
        }
    } else {
        printf("Please enter a 4-digit number.\n");
    }
}
