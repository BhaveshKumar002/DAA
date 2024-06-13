#include <stdio.h>
int find_largest(int arr[], int size) 
{
    int largest = arr[0];
    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > largest) 
		{
            largest = arr[i];
        }
    }
    return largest;
}
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printf("The largest element in the array is: %d\n", find_largest(arr, size));

    return 0;
}

