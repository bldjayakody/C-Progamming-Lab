#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name[20],city;
   float  b_salary,service_years,m_sales,a_allowance,bonus,g_remuneration;
   printf("Enter the sales person name ");
   scanf("%s",&name);
   printf("Enter the basic salary ");
   scanf("%f",&b_salary);
   printf("Service years ");
   scanf("%s",&service_years);
   printf("Enter the city ");
   scanf("%s",&city);
   printf("Enter the monthly sales ");
   scanf("%f",&m_sales);

   if(m_sales>=50000)
   {
       bonus=0.15*m_sales;
   }
   else if(m_sales<=25000)
   {
       bonus=0.1*m_sales;
   }
   else
   {
       bonus=0.12*m_sales;
   }
   switch(city)
   {
       case'C':a_allowance=2500;break;
       default:a_allowance=0;
   }
   service_years=5;
   if(service_years>5)
   {
       a_allowance=0.1*b_salary;
   }
   g_remuneration=b_salary+a_allowance+bonus;
   printf("gross remuneration : %.2f",g_remuneration);

    return 0;
}
