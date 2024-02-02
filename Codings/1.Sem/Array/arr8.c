/*Square of Diagonal Elements and cubes of secondary diagonal of matrix*/
#include<stdio.h>
#include<math.h>
void main ()
{   
    int n,m,s=0,d=0;
    printf("Enter the no. of rows m and no. of columns ");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    
    for(int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ;j<n; j++ )
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (i == j)
            {
                s = arr[i][j]*arr[i][j];
                printf("%d\n",s);
            }
        }
    }

    for(int i = 0 ; i<m ; i++)
    { 
        d=arr[i][m-1-i]*arr[i][m-1-i]*arr[i][m-1-i];
        printf("%d\n",d);
    }    
}
