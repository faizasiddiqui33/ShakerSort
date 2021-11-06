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

/*****************************************************************************************************************************
    Module Name: Main Function
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 11.11.2021
    Purpose: To print message to user, to print the sorted array in a Ascending order & Descending order using Shaker Sort Algorithm
    Description: This function prompts the user to determine the size of array. 
		- It restricts the user from entering any invalid entries for size of array and allows to enter only positive whole numbers.
		- It generates a random array of the size given by the user and prints it
		- It calls the function for sorting array in Ascending order & displays the sorted array
		- It calls the function for sorting array in Descending order & displays the sorted array
		- It prints the time taken to perform both sortings.
        @param: None
        @return integer - 0 if program executed successfully, else nonzero will be returned
	Precondition: None
	Postcondition: Prints the array in ascending and descending order using Shaker Sort & also the time taken in both sortings
	Method Output: 
		Asks the user to input array size
		Checks for invalid entry from the user and prompts error message to the user for entering incorrect array size
		Prints the array in ascending and descending order using Shaker Sort & also the time taken in both sortings
*****************************************************************************************************************************/
int main()
{
	///to store the number of elements entered by the user
	int noOfElements;

	///for traversing the array
	int i;

	///to check if the number entered by the user was not a decimal number
	double checkforFloatNo;

	///Prompt the user to enter the array size
	cout << "\nEnter the number of Array elements to be sorted: ";
	cin >> checkforFloatNo;

	///to check if input failed, if number entered is float(by subtracting the number with its whole value part, if it is 0 then failed), check if number is negative or zero:->ask for input
	while ((cin.fail()) || (checkforFloatNo - floor(checkforFloatNo)) || (checkforFloatNo <= 0))
	{
		cout << "ERROR! You have entered wrong input! Try again! \nPlease enter a positive whole number only: " << endl;
		cout << "\nEnter the number of Array elements to be sorted: ";
		
		///get rid of the error flag.
		cin.clear();
		
		///ignore first 256 characters or all the characters until \n is encountered because it was an incorrect input from user
		cin.ignore(256, '\n');
		
		///take input again because the previous entry was wrong
		cin >> checkforFloatNo;
	}
	///convert the final correct entry you received from user to integer form, since array size must be integer
	noOfElements = (int)checkforFloatNo;
	cout << "---------------------------------------------------------------------------------------------------";
	
	///give a confirmation to the user of the number of elements needed in array
	cout << "\nYou want to enter " << noOfElements << " elements in your array.\n"<< endl;

	///define an array of the size given by the user
	int myArray[noOfElements];

		///loop for entering random numbers in the array 
	for (i = 0; i < noOfElements; i++)

		///Generates random numbers between 0 to 99999 with rand() function for every element of the array
		myArray[i] = rand() % 100000; 

	///Print the array elements
	cout << "Elements of the array are:" << endl;

	///for displaying all the array elements to the user 
	for (i = 0; i < noOfElements; i++)
		cout << "Element no. " << i + 1 << ": " << myArray[i] << endl;

			///Save a copy of the array for Descending order, since the original array will be sorted and lost
	int copyMyArray[noOfElements];

	///copying all elements of original array to another array
	for (i = 0; i < noOfElements; i++)
	{
		///assigning value of every element to the empty 
		copyMyArray[i] = myArray[i];
	}


    return 0;
}