

#include <stdio.h>
#include <math.h>

    int main()
{
   double radius,diameter,circumference,area,PI=M_PI;

   printf("Enter the radius of a circle ");
   scanf("%lf",&radius);
   diameter=2*radius;
   circumference=2*PI*radius;
   area=PI*radius*radius;
   printf("diameter: %.2f \n",diameter);
   printf("circumference:%.2f \n",circumference);
   printf("araea:%.2f \n",area);

   return 0;
}
