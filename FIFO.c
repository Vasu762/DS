#include <stdio.h>
#define n 5
int a[n], top = -1;
int insertFirst(int val)
{
    if (top >= n - 1)
        printf("Array is full:\n");
    else
    {
        top++;
        for (int i = top; i >= 0; i--)      
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
    }
}

int display()
{
    if (top < 0)
        printf("Array is empty...\n");
    else
    {
        for (int i = 0; i <= top; i++)
            printf("%d", a[i]);
    }
}
int delete()
{
    if (top < 0)
        printf("Array is full:\n");
    else
    {
        top--;
        for (int i = 0; i <= top; i++)
        {
            a[i] = a[i + 1];
        }
    }
}
int main()
{

    // insertEnd(20);
    // insertEnd(30);
    insertFirst(40);
    insertFirst(50);
    insertFirst(60);
    // delete ();

    delete();
    display();
    
}
