#include <stdio.h>
void fuck(void);
void main ()
   {
    fuck();
   }
void fuck(void)
{
    int arr[30];
    int i, j, a, n;
    printf("Enter the value of N\n");
    scanf("%d", &n);
 
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
	{  
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j) 
        {
            if (arr[i] > arr[j]) 
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    int sm=0,sl=0;
    sm=arr[0]+arr[1]+arr[2];
    sl=arr[7]+arr[8]+arr[9];
    printf("smallest element sum is %d and largest is %d",sm,sl);
}