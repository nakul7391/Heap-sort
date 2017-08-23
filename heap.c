#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

/*passing the base address of array size and first node*/
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]); /* swap elements*/
        heapify(arr, n, largest); /* recursively call heapify*/
    }
}

/*function for heap sort*/
void heap_sort(int arr[], int n)
{
    /*convert given array to max heap build heap*/
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    /*print the array*/
    printf("MAX HEAP ARRAY\n");
    print_array(arr,n);
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        /*move ma element to last*/
        swap(&arr[0], &arr[i]);
        /*decrease the size of the heap*/
        heapify(arr, i, 0);
    }
}

/*swap two values using their addresses*/
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void print_array(int arr[], int size)
{
    int i = 0;

    /*print array elements one by one in a loop*/
    for( i = 0; i < size; i++ )
    printf("%d ", arr[i]);
    printf("\n");
}
