#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the Numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
printf(" A %d B %d",a,b);
return 0;
}