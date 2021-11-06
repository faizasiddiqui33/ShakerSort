/*****************************************************************************************************************************
	Module Name: Shaker Sort Algorithm
	Author: Faiza Fatma Siddiqui
	Date Created/Modified:11.11.2021
	Student ID: 200473896
	Purpose: CS 700 - Software Development Fundamentals - Assignment 4 
	Description: 
		- This program prompts the user to determine the size of array. 
		- It restricts the user from entering any invalid entries for size of array and allows to enter only positive whole numbers.
		- It generates a random array of the size given by the user.
		- It sorts the array in Ascending order using Shaker Sort Algorithm.
		- It sorts the array in Descending order using Shaker Sort Algorithm.
		- It prints the time taken to perform both sortings.
*****************************************************************************************************************************/

#include <bits/stdc++.h>

#include <chrono>

using namespace std;

/*****************************************************************************************************************************
    Module Name: Swap Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 01.11.2021
    Purpose: To swap values using call by reference
    Description: This function takes the help of a third temporary variable to interchange the values of two variables
        @param: int *a - receives the address of a variable to be swapped
		@param: int *b - receives the address of another variable to be swapped
        @return null
	Precondition: address Only integer values should be passed
	Postcondition: Integer values of 2 numbers are interchanged
	Method Output: The values of 2 given variables are interchanged
*****************************************************************************************************************************/
void swap(int *a, int *b)
{
	///temporary variable to help in swapping
	int temp;

	///storing address of first variable in temporary variable, so that it is not lost
	temp = *a;

	///replacing the address of first variable with second variable
	*a = *b;

	///storing the address of first variable which was in temp to second variable
	*b = temp;
}


int main()
{
	
    return 0;
}