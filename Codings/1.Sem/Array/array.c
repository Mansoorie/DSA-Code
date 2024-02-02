/* To find greatest and smallest element across a integer in array*/
#include<stdio.h>
int main()
{
    int n,x;
    int arr[50];
    int t;
    printf("Enter value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              t=arr[i];
              arr[i]=arr[j];
              arr[j]=t;
            }
        }
    }
    printf("Enter value of x");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        
        if(x==arr[i])
        {
            printf("gratest element is%d and smallest element is %d",arr[i+1],arr[i-1]);
        }
    }
 return 0;
    

}