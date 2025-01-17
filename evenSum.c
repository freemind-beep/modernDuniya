//Sum of Even Numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n,i,sum;
    i=0;
    sum=0;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    for(i=2;i<=n;){
        sum=sum+i;
        i=i+2;
    }

    printf("\n Sum of Even Numbers is=%d", sum);
    return 0;
}