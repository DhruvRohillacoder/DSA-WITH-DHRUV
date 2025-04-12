// #include <stdio.h>
// int main()
// {
//     int a[40], n, i, k, temp, min, position;
//     printf("Enter the no.of element in the array:");
//     scanf("%d", &n);
//     printf("Enter the element of array:");
//     for (i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     for (k = 0; k < n - 1; k++)
//     {
//         min = a[k];
//         position = k;
//     for (i = k + 1; i < n; i++)
//     {
//         if (min > a[i])
//         {
//             min = a[i];
//             position = i;
//         }
//     }
// }
//     if (position != k)
//     {
//         temp = a[k];
//         a[k] = a[position];
//         a[position] = temp;
//     }

//     printf("the stored array is:");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
   
//     return 0;
// }
// // alwabyys paese n-1 denoted by [k]
#include <stdio.h>

int main()
{
    int a[40], n, i, k, temp, min, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Selection Sort Algorithm
    for (k = 0; k < n - 1; k++)
    {
        min = a[k];
        position = k;

        for (i = k + 1; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                position = i;
            }
        }

        // Swap only if position changes
        if (position != k)
        {
            temp = a[k];
            a[k] = a[position];
            a[position] = temp;
        }
    }

    // Printing the sorted array
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
