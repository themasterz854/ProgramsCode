#include<stdio.h>
#include<stdlib.h>

int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    int temp;
    int j, i;
    for (i = 1; i <= d; i++)
    {
        temp = arr[0];
        for (j = 0; j < arr_count - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[arr_count - 1] = temp;
    }
    *result_count = arr_count;
    return arr;
}
int main()
{
    int* b;
    int a[20] = { 0,1,2,3,4,5 };
    b = rotateLeft(3, 6, a);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", *(b + i));
    }
    return 0;
}