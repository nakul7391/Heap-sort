#ifndef HEAP_H
#define HEAP_H

/*function to swap the values*/
void swap(int *x, int *y);

/*function to build heap and sort it*/
void heap_sort(int arr[], int n);

/*function to make heap*/
void heapify(int arr[], int n, int i);

/*function to print array*/
void print_array(int arr[], int size);
#endif
