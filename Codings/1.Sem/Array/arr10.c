/* Reverse the String elements*/

#include<stdio.h>
int main()
{
    int n;
    int arr[50];
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}