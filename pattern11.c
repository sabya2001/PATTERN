#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",(n-i+1));
        }printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",(n-i+1));
        }printf("\n");
    }printf("Done by sabyasachi chattopadhyay 115");
return 0;
}
