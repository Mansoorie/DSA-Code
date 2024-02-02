/* find sum of odd elemts in row and column of a matrix*/
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter number of elements n: ");
    scanf("%d%d", &m,&n);
    int arr[m][n];
    printf("\nEnter the elements for array..\n");
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("array[%d,%d] : ", i,j);
           scanf("%d", &arr[i][j]);
        }    
    }
    
    for (int i = 0; i < m; i++)
    {
        int sr=0,sc=0;
        for(int j=0;j<n;j++)
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
        printf("sum of odd elements of %d row is %d\n",i+1,sr);
        printf("sum of odd elements of %d column is %d\n",i+1,sc);
    }

    for(int i = 0; i < m; i++)
    {
       for(int j=0;j<n;j++)
        {
           printf("%d",arr[i][j]);
        }    
        printf("\n");
    }
}