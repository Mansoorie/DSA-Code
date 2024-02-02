/* Assignment 12 */
#include <stdio.h>
void main()
{
    int n;
    printf("\t\t\t******INPUT******\n");
    printf("Enter size of array\n");
    scanf("%d", &n);
    char array[n];
    getchar();
    for (int i = 0; i < n; i = i + 1)
    {
        printf("Enter character ");
        scanf("%c", &array[i]);
        getchar();
        if (array[i] >= 'A' && array[i] <= 'Z')
        {
            if (array[i] == 'A' || array[i] == 'E' || array[i] == 'I' || array[i] == 'O' ||array[i] 		== 'U')
            {
                array[i] = '1';
            }
            else
            {
                array[i] = '2';
            }
        }
        else if (array[i] >= 'a' && array[i] <= 'z')
        {
            if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o'||array[i] 		== 'u')
            {
                array[i] = 42;
            }
            else
            {
                array[i] = 43;
            }
        }
        else if (array[i] == ' ')
        {
            array[i] = 53;
        }
        else if (array[i] >= 48 && array[i] <= 57)
        {
            array[i] = 64;
        }
        else if (array[i] >= 33 && array[i] <= 47 || array[i] >= 58 && 				array[i]<=64||array[i]>= 91 && array[i] <= 96 || array[i] >= 122 && 		array[i]<= 126)
        {
            array[i] = 32;
        }
    }
    printf("\t\t\t******OUTPUT******\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", array[i]);
    }
}
