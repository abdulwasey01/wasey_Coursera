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
 * @file <wasey_Coursera> 
 * @brief <in this file there are three files a header file a read me file and a c program file >
 *
 * <the code has 8 fucntions which perform different operations based on their program.>
 *
 * @author <Abdul Wasey>
 * @date <22/7/2023 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Prints the maximum, minimum, mean and median of the given array>
 *
 * <This function takes an array of 40 and then calculates its maximum number, minimum         number, its mean and its median>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return 0 after printing the values )>
 */

int print_statistics(unsigned char arr[],unsigned int size);

/**
 * @brief <Prints the whole array which is given in the code in c file>
 *
 * <This function takes an array of 40 which is a char array and it prints it on the screen>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return the array )>
 */

void printArray(unsigned char arr[], int size);

/**
 * @brief <find the median  which is given in the code in c file>
 *
 * <This function takes an array of 40 which is a char array and then it sorts the array and finds the median of the array>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return the median )>
 */

int find_median(unsigned char*arr,unsigned int size);

/**
 * @brief <find the mean  which is given in the code in c file>
 *
 * <This function takes an array of 40 which is a char array and then it finds the mean of the array by summing all the array and then dividing it with the total number of array variables>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return the mean )>
 */


int find_mean(unsigned char*arr,unsigned int size);
/**
 * @brief <find the maximum  which is given in the code in c file>
 *
 * <This function takes an array of 40 which is a char array and then it finds the maximum of the array it compares all the array and then picks the maximum number out of it>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return the maximum number )>
 */

int find_maximum(unsigned char*arr,unsigned int size);
/**
 * @brief <find the maximum  which is given in the code in c file>
 *
 * <This function takes an array of 40 which is a char array and then it finds the maximum of the array it compares all the array and then picks the minimum number out of it>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return the minimum number )>
 */
int find_minimum(unsigned char*arr,unsigned int size);
/**
 * @brief <find the maximum  which is given in the code in c file>
 *
 * <This function takes an array of 40 which is a char array and then it finds the maximum of the array it compares all the array and then picks the minimum number out of it>
 *
 * @param <arr> <takes the array which is mentioned in the c file>
 * @param <size> <the size of the array>
 * 
 *
 * @return <return the minimum number )>
 */
 int sorted_array(unsigned char arr[],size_t size);



#endif /* __STATS_H__ */
