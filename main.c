#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;

    printf("enter the ten numbers\n");
    for(i=0;i<=10;i++)
        printf("%d\n",&a[i]);
   for(i=0;i<=10;i++)
    printf("\n position of %d is %d",a[i],i++);
    return 0;
}
