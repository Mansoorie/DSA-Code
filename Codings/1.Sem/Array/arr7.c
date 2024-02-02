/*Sum of Diagonal Elements of matrix*/
#include<stdio.h>
void main ()
{   
    int n,m,s=0;
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
    for(int i = 0 ; i<m ; i++)
    { 
        for(int j = 0 ;j<n; j++ )
        {
            if(i==j)
            {
                s=s+arr[i][j];
            }
        }
    }
    printf("\nThe sum of Diagonal elements is %d",s);
    
}
