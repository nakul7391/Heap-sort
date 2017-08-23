/*This program is to implement heap sort */
#include <stdio.h>
#include "heap.h"

int main(int argc, char *argv[] )
{
		int size, i;

		printf("Enter the array size: ");
		scanf("%d", &size);

		/*create array*/
		int arr[size];

		printf("Enter the array elements: \n");

		/*get array elements*/
		for ( i = 0; i < size; i++ )
		scanf("%d", &arr[i]);

		/*call heap sort*/
		heap_sort(arr,size);

		/*print sorted array*/
		printf("SORTED ARRAY\n");
		print_array(arr, size);
		return 0;
}
