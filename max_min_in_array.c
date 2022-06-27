#include <stdio.h>

int largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int smallest(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int nums[100], length;

    // in case the array has predefined elements then the length of the elements is:
    // int length = sizeof(nums) / sizeof(nums[0]);

    printf("How many elemnts you want to enter: ");
    scanf("%d", &length);

    printf("Enter your elements: \n");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("The maximum number is: %d\n", largest(nums, length));
    printf("The maximum number is: %d", smallest(nums, length));
    return 0;
}