/*  C Program to Evaluate Polynomial using Horner’s method  */

#include <stdio.h>

int main()
{
     float a[100],sum=0,x;
     int n,i;

     printf("\nENTER DEGREE OF THE POLYNOMIAL X : ");
     scanf("%d",&n);
     printf("\nENTER COEFFICIENT'S OF THE POLYNOMIAL X : \n");
     for(i=n;i>=0;i--)
     {
            printf("\nENTER COEFFICIENT OF [ X^%d ] : ",i);
            scanf("%f",&a[i]);
     }

     printf("\nENTER THE VALUE OF X : ");
     scanf("%f",&x);

     for(i=n;i>0;i--)
     {
        sum=(sum+a[i])*x;
     }

     sum=sum+a[0];

     printf("\nVALUE OF THE POLYNOMIAL IS = [ %f ]\n",sum);

     return 0;
}
