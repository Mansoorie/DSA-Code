/* Array in Descending order*/
#include<stdio.h>
int main()
{
    int n,x;
    int arr[30];
    int t;
    printf("Enter value of n");
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i]<arr[j])
            {
              t=arr[i];
              arr[i]=arr[j];
              arr[j]=t;
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        printf("%d",arr[i]);
    }
 return 0;
    

}