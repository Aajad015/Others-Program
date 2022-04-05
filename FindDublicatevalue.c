#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter the Numbers :");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
#include<stdio.h> // Find the Dublicate value in Array.
int main()
{
    int a[10];
    int i,j,n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    printf("Enter the Numbers:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Dublicates Numbers:");
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
          
        if(a[i]==a[j])
        {
            printf("%d\n",a[i]);
        }
     
      }
    }
    return 0;
    
}
printf(" A %d B %d",a,b);
return 0;
}