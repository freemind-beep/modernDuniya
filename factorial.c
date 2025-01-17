//Factorial of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,n;
    long int fact=1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }

    printf("\n Factorial of %d is: %ld", n, fact);

    return 0;
    
}