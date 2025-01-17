//log(1+x) Series
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int n=1;
    float x, sum=0,term=0;
    printf("\n\n Enter the value of x:");
    scanf("%f", &x);
    if(x<=1&&x>-1)
    {
        sum=x;
        term=x;
        while(fabs(term)>0.00001)
        {
            term=term*(-n)*x/(n+1);
            sum=sum+term;
            n=n+1;
        }

        printf("\n \n Value of log(1+%f) satisfying -1<x<=1 is: %7.4f, correct upto 4 decimal places.",x,sum);
    }else{
        printf("\n \n The series does not Converge for x=%7.4f",x);
    }

    return 0;
}