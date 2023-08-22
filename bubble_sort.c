#include <stdio.h>
#define n 8
int arr[n] = {44, 8, 15, 28, 12, 35, 10, 28};
void sort()
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
           if( arr[j] > arr[j + 1]){
            int temp ;
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp ;
           }
        }
    }
    for(int i=0;i<=n;i++)
    {
    printf("%d   \t",arr[i]);
    }
    
}
int main()
{
    sort();
}