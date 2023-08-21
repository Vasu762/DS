#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], n;
    for (int i = 0; i < 9; i++)
    {
        a[i] = rand() % 50 + 1;
        printf("%d  \t", a[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        printf("\nEnter the value Number:");
        scanf("%d", &n);
    }

    for (int i = 0; i < 1; i++)
    {
        if (n = a[i])
        {
            printf("Your Element is present in array:  \n");
        }
        else if(n!= a[i])
        {
            printf("Data not fount...........");
        }
        else{}
    }
}
