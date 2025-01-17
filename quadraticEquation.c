//Roots of Quadratic Equations
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float a,b,c,disc,A,B,C,D,F;
    printf("\n\t Enter the values of a b c: ");
    scanf("%f %f %f", &a,&b,&c);
    disc=b*b-4*a*c;
    if(a==0)
    {
        printf("\n\n\t The equation is not Quadratic.");
    }else{
        printf("\n\n\t The equation is Quadratic");
        if(disc>0){
            printf("\n\n\t The roots are Real and Unequal");
            A=((-b)+sqrt(disc))/(2*a);
            B=((-b)-sqrt(disc))/(2*a);
            printf("\n\t A=%8.4f, B=%8.4f", A,B);
        }
        else{
            if(disc<0){
                printf("\n\n\t The roots are Imaginary.");
                C=(-b)/(2*a);
                D=sqrt(fabs(disc))/(2*a);
                printf("\n\n\t A=%6.4f+i%6.4f",C,D);
                printf("\n\n\t A=%6.4f-i%6.4f",C,D);
            }else{
                printf("\n\n\t The roots are Real and Equal");
                F=(-b)/(2*a);
                printf("\n\t The Equal root is = %6.4f", F);
            }
        }
    }
    return 0;
}