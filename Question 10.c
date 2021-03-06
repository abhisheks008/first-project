#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size
/* Function declaration to print array */
void printArray(int arr[], int size);
int main()
{
int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
int size, i;
int *source_ptr = source_arr; // Pointer to source_arr
int *dest_ptr = dest_arr; // Pointer to dest_arr
int *end_ptr;
/*
* Input size and elements in source array
*/
scanf("%d", &size);
for (i = 0; i < size; i++)
{
scanf("%d", (source_ptr + i));
}
// Pointer to last element of source_arr
end_ptr = &source_arr[size - 1];
/*
* Run loop till source_ptr exists in source_arr
* memory range.
*/
while(source_ptr <= end_ptr)
{
*dest_ptr = *source_ptr;
// Increment source_ptr and dest_ptr
source_ptr++;
dest_ptr++;
}
printArray(dest_arr, size);
return 0;
}
/**
* Function to print array elements.
*
* @arr Integer array to print.
* @size Size of array.
*/
void printArray(int *arr, int size)
{
int i;
for (i = 0; i < size; i++)
{
printf("%d\n", *(arr + i));
}
}
