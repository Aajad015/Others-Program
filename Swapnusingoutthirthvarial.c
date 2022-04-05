#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter the Numbers :");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
printf(" A %d B %d",a,b);
return 0;
}