#include <stdio.h>

int main()
{
    int size, i, largest, array[i];  
    printf("Enter the size of the array: ");  
    scanf("%d", &size);  
    printf("Enter the elements: ");  
    for(i = 0; i < size; i++)  
    {  
        scanf("%d", &array[i]);  
    }  
    largest = array[0];

    for (i = 1; i < size; i++) 
    {
        if (largest < array[i])
        largest = array[i];
    }

    printf("\n Largest element in the given array is : %d", largest);

    return 0;
 }
