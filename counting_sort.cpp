#include<stdio.h>
#define SIZE 100
#define RANGE 10

int arr[SIZE]; 

int main()
{
    int i, n, value;

    printf("Enter the number of Values: ");
    scanf("%d", &n);

    printf("Enter %d elements (1 to 10):\n", n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%d", &value);
        arr[value] = arr[value] + 1;
    }

    printf("\nFrequencies of values (1 to 10):\n");
    for(int i = 1; i<=RANGE; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}