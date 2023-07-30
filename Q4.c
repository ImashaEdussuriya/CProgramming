#include <stdio.h>
#include <stdlib.h>

int main()
{
 const float PI=3.14159;
 float r;

 printf("Enter the radius of the circle");
 scanf("%f",&r);

 printf("Diameter:%2f\n",2*PI*r);
 printf("Circumference:%.2f\n",2*PI*r);
 printf("Area:%2f\n",PI*r*r);


}
