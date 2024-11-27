#include <stdio.h>
#include<conio.h>
void main()
{
    int t,count,n;
    int clrscr();
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        
    }
    if (count == 1 )
    {
        printf("Number is prime number");
    }
    else
    {
        printf("Number is not prime number");
    }
    getch();
    
}