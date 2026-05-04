#include<stdio.h>
int main()
{ 
   float area,r;
   printf("Enetre a number:\n");
   scanf("%f",&r);
   
   area=3.14*r*r;
   printf("area of circle =%.2f\n",area);
   
   float circum=2*3.14*r;
   printf("circumference of circle=%.2f\n",circum);
   
   float dia=2*r;
   printf("diameter of circle =%.2f\n",dia);
   
   return 0;
}
