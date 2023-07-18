#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,max,smalle;
    printf("Enter three numbers ");
    scanf("%d %d %d ",&n1,&n2,&n3);

    max=n1;
    smalle=n1;
    if(n2>max)
    max=n2;
    if(n3>max)
    max=n3;
    if(n2<smalle)
    smalle=n2;
    if(n3<smalle)
    smalle=n3;

    printf("The largest is %d \n",max);
    printf("The smallest is %d \n",smalle);

S
    return 0;
}
