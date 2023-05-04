// A five-digit number is entered through the keyboard.
// Write a program to obtain the reversed number and 
// to determine whether the original and reversed numbers are equal or not.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n, d5, d4, d3, d2, d1, original;
    long int revnum;
    printf("Enter Five Digit Number (less then 32767)");
    scanf("%d", &n);
    d5 = n % 10;
    n = n / 10;
    d4 = n % 10;
    n = n / 10;
    d3 = n % 10;
    n = n / 10;
    d2 = n % 10;
    n = n / 10;
    d1 = n % 10;
    revnum = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    printf("The Revnum is %ld\n", revnum);
    
    if (revnum = original)
        printf("\n Revnum number is Equal to Original \n");
    else 
        printf("\n Revnum Number is Not Equal to Original \n");
    return 0;
}
