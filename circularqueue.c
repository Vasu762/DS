#include <stdio.h>
#define n 5
int a[n], f = -1, r = -1;

int insertend(int val)
{
    if (r < 0)
    {
        f = r = 0;
        a[r] = val;
    }
    else if ((r + 1) % n == f)
    {
        printf("Queue is full ... \n");
    }
    else
    {
        r = (r + 1) % n;
        a[r] = val;
    }
}

int dlt()
{
    if (f < 0)
    {
        printf("Queue is empty.....");
    }
    else
    {
        f++;
    }
}

int display()
{
    int i = f;
    if (f < 0)
    {
        printf("Queue is empty");
    }
    else
    {
        do
        {
            printf("%d ", a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);

    dlt();
    dlt();
    dlt();
    insertend(60);
    insertend(70);
    dlt();
    dlt();

    display();
}