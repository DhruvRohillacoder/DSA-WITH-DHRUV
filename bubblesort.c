// #include<stdio.h>
// int main()

// {
//     int a[40], n, i, j, temp;

//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the array: ");
//     for (i = 0; i < n; i++){
//         scanf("%d", &a[i]);
//     }
//     //bubble sort :interchnage array elements
//     for (i = 0; i < n - 1;i++){
//         for (j = 0; j < n - i - 1;++j){
//             if(a[j]>a[j+1]){
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }
//     // Printing the sorted array
//     printf("The sorted array is: ");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d \n", a[i]);
//     }
    

//     return 0;
// }
#include <stdio.h>

int main()
{
    int a[40], n, i, j, temp;

    // Taking input for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Taking input for the array elements
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Bubble Sort Algorithm
    // Outer loop: Number of passes (n-1)
    for (i = 0; i < n - 1; i++)
    {
        // Inner loop: Compare and swap adjacent elements
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            { // Swap if the left element is greater than the right one
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Printing the sorted array
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // Print elements in a single linenmbjkĵkh
    }
    printf("\n"); // Newline for better formatting

    return 0;
}
