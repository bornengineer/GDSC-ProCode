#include <stdio.h> 
int main()
{
    int i,j,p;
    printf("Enter size of matrix\n");
    scanf("%d",&p);

    int a[p][p],b[p][p];
    printf("Enter 1st matrix\n");
    for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
      for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            b[j][i]=a[i][j];
        }
    }
     for(i=0;i<p;i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d\t",b[i][j]);
        }
       printf("\n"); 
    }
    return 0;
}
