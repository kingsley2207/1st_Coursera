/**
 * @file stats.h
 * @author Minh Quan (kingsley2207@gmail.com)
 * @brief 
 * 
 * This is example about array 1D
 * import_array()
 * print_array()
 * find_maximum()
 * find_minimum()
 * find_median()
 * 
 * @version 0.1
 * @date 2022-08-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

void print_array(int arr[], int n);
void import_array(int *arr, int n);
void sort_array(int *arr, int n);

int find_minimum(int *arr, int n);
int find_maximum(int *arr, int n);
int find_mean(int *arr, int n);
float find_median(int *arr, int n);
