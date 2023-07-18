#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[20];
    float bs,inc,ns;

    printf("Enter employee name ");
    scanf("%s",&empname);
    printf("enter basic salary ");
    scanf("%f",&bs);

    if(bs<5000)
    inc=0.05*bs;
    else if(5000<=bs<10000)
    inc=0.1*bs;
    else{
    inc=0.15*bs;
    }
    ns=bs+inc;
    printf("Employee name %s \n",empname);
    printf("New salary %.2f \n",ns);

    return 0;
}
