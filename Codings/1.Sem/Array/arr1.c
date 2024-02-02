/* find sum of odd elemts in row and column of a matrix*/
#include<stdio.h>
void rem(void);
void main()
{
    rem();
}
void rem(void)
{
    int m,n;
    
    printf("Enter the values of a and b");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            printf("array[%d,%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;++i)
    {
        int sr=0,sc=0;
        for(int j=0;j<n;++j)
        {
           if(arr[i][j]%2)
           {
            sr=sr+arr[i][j];
           }
           if(arr[j][i]%2)
           {
            sc=sc+arr[j][i];
           }
        }
        printf("For row %d sum of even is %d\n",i+1,sr);
        printf("For col %d sum of odd is %d\n",i+1,sc);
    }
    for(int i = 0; i < m; i++)
    {
       for(int j=0;j<n;j++)
        {
           printf("%d",arr[i][j]);
        }    
        printf("\n");
    }
    return;


}