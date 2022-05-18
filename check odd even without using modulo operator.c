#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enetr the Number:");
    scanf("%d",&n);
    for(i=1;i<=50;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i=0;i<50;i++)
    {
    sum=sum+i;
    }
    
    printf("Sum %d",sum);
     printf("Enetr the Number:");
    scanf("%d",&n);
    if((n & 1)==0)
    
        printf("%d Even Nuumber:",n);
    else
            printf("%d Odd Nuumber:",n);

    
    return 0;
}