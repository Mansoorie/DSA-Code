/*Program to find sum of digits of each number in an array*/

#include<stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter values inside array");
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;++i)
    {
        int r,s=0;
        while(arr[i]!=0)
        {
          r=arr[i]%10;
          s=s+r;
          arr[i]=arr[i]/10;
        } 
        printf("%d\n",s);
    }
    
}