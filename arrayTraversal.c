#include <stdio.h>
int main()
{
    int a[50], size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The elements of the array are: ");

    
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
