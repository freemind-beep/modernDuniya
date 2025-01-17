//Sum of N Natural Numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n, sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("\n Sum of the %d Natural numbers is : %d", n,sum);
    return 0;

}