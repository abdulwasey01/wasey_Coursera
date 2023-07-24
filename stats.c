/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {


unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                 114, 88,   45,  76, 123,  87,  25,  23,
                                 200, 122, 150, 90,   92,  87, 177, 244,
                                 201,   6,  12,  60,   8,   2,   5,  67,
                                   7,  87, 250, 230,  99,   3, 100,  90};
    
  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
   print_statistics(test,SIZE);
   
   //print the whole array
  
    printArray(test, SIZE);
   
   //print the median
	find_median(test,SIZE);
	
   //print mean function
   find_mean(test,SIZE);
   
   //print maximum
   find_maximum(test,SIZE);
   
   //print minimun
   find_minimum(test,SIZE);
   // print the sorted array
   sorted_array(test,SIZE);
}

int print_statistics(unsigned char arr[], unsigned int size) {
    // Make a copy of the array to preserve the original data
    unsigned char arr_copy[SIZE];
    for (unsigned int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];
    }

    // Sort the copy of the array in ascending order
    for (unsigned int i = 0; i < size - 1; i++) {
        for (unsigned int j = 0; j < size - i - 1; j++) {
            if (arr_copy[j] > arr_copy[j + 1]) {
                unsigned char temp = arr_copy[j];
                arr_copy[j] = arr_copy[j + 1];
                arr_copy[j + 1] = temp;
            }
        }
    }

    // Calculate and print statistics using the sorted copy
    unsigned char min = arr_copy[0];
    unsigned char max = arr_copy[size - 1];
    unsigned int sum = 0;

    for (unsigned int i = 0; i < size; i++) {
        sum += arr_copy[i];
    }

    float mean = (float)sum / size;

    float median;
    if (size % 2 == 0) {
        median = (arr_copy[size / 2 - 1] + arr_copy[size / 2]) / 2.0;
    } else {
        median = arr_copy[size / 2];
    }

    printf("Array Statistics:\n");
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    
    return 0;
}
void printArray(unsigned char arr[], int size) {
printf("the array is as:\n");
    for (int i = 0; i < size; i++) {
        printf("%3u", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int find_median(unsigned char*arr,unsigned int size)
{
	for (unsigned int i = 0; i < size - 1; i++) 
	{
        for (unsigned int j = 0; j < size - i - 1; j++)
         {
            if (arr[j] > arr[j + 1]) 
            {
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        }
        
         float median;
    if (size % 2 == 0) {
        median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        median = arr[size / 2];
    }
    printf("Median: %.2f\n", median);
    return median;
 
}
int find_mean(unsigned char*arr, unsigned int size)
{
	 unsigned int sum = 0;

    // Find minimum, maximum, and sum
    for (unsigned int i = 0; i < size; i++)
     {    
        sum += arr[i];
    }

    // Calculate mean
    float mean = (float)sum / size;
    printf("Mean: %.2f\n",mean);
    return mean;

}
int find_minimum(unsigned char*arr, unsigned int size)
{
	unsigned char min = arr[0];
    

    // Find  maximum
    for (unsigned int i = 0; i < size; i++) 
    {
   
        if (arr[i] < min) {
            min = arr[i];
            }
        
    }
    printf("minimum number is:%d\n",min);
    return min;




}

int find_maximum(unsigned char*arr, unsigned int size)
{
	unsigned char max = arr[0];
    

    // Find  maximum
    for (unsigned int i = 0; i < size; i++) 
    {
   
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    printf("maximum number is:%d\n",max);
    return max;




}
int sorted_array(unsigned char arr[], size_t size) {
    // Bubble Sort algorithm to sort the array
    for (size_t i = 0; i < size - 1; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Modify the condition for descending order
                // Swap elements
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("the sorted array is:");
     for (int i = 0; i < size; i++) {
        printf("%3u", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}





