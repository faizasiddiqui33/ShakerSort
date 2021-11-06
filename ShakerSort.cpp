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

/// This header file includes all standard libraries
#include <bits/stdc++.h>

/// chrono library deals with time, by means of clocks, time points, durations
#include <chrono>

/// This file includes all standard libraries
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
    Module Name: Shaker Sort Function - Ascending Order
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 11.11.2021
    Purpose: To sort an array in Ascending order using Shaker Sort Algorithm
    Description: This function sorts an array in Ascending order using Shaker Sort Algorithm
        @param: int AscendingArr[] - receives the randomly generated array to be sorted of integer type
		@param: int arraySize - takes the size of the array of integer type
        @return null
	Precondition: integer type of array and array size should be passed as arguments
	Postcondition: All the elements of the array gets sorted in Ascending Order
	Method Output: All the elements of the AscendingArr[] array gets sorted in Ascending Order
*****************************************************************************************************************************/
void ShakerSortAscending(int AscendingArr[], int arraySize)
{
	///assigning arraysize as end, just for better understanding & code readability when using loops in the function
	int end = arraySize;

	///set the start value to the first element of the array
	int start = 0;

	/// variables for starting point of both phases
	int phase1Start, phase2Start;

	///this loop will run from start of the array till the end of array
	while (start < end)
	{
		///Phase 1 of array goes from left to right and brings the greatest number to the end
		for (phase1Start = start + 1; phase1Start < end; phase1Start++)
		{
			///check for greater number from first two elements, then next two and so on till end
			if (AscendingArr[phase1Start] < AscendingArr[phase1Start - 1])

				///swap if a greater number is found
				swap(&AscendingArr[phase1Start], &AscendingArr[phase1Start - 1]);
		}
		/// Decrement the end as we are getting the greatest sorted number in the end
		end--;

		/// Phase 2 of array goes from right to left and brings the smallest number to the start
		for (phase2Start = end - 1; phase2Start > start; phase2Start--)
		{
			///check for smaller number from first two elements, then next two and so on till end
			if (AscendingArr[phase2Start] < AscendingArr[phase2Start - 1])

				///swap if a smaller number is found
				swap(&AscendingArr[phase2Start], &AscendingArr[phase2Start - 1]);
		}
		/// Increment the start as we are getting the smallest sorted number in the start
		start++;
	}
}

/*****************************************************************************************************************************
    Module Name: Shaker Sort Function - Descending Order
    Author: Faiza Fatma Siddiqui
    Date Created/Modified: 11.11.2021
    Purpose: To sort an array in Descending order using Shaker Sort Algorithm
    Description: This function sorts an array in Descending order using Shaker Sort Algorithm
        @param: int DescendingArr[] - receives the randomly generated array to be sorted of integer type
		@param: int arraySize - takes the size of the array of integer type
        @return null
	Precondition: integer type of array and array size should be passed as arguments
	Postcondition: All the elements of the array gets sorted in Descending Order
	Method Output: All the elements of the DescendingArr[] array gets sorted in Descending Order
*****************************************************************************************************************************/
void ShakerSortDescending(int DescendingArr[], int arraySize)
{
	///assigning arraysize as end, just for better understanding & code readability when using loops in the function
	int end = arraySize;

	///set the start value to the first element of the array
	int start = 0;

	/// variables for starting point of both phases
	int phase1Start, phase2Start;

	///this loop will run from start of the array till the end of array
	while (start < end)
	{
		///Phase 1 of array goes from left to right and brings the smallest number to the end
		for (phase1Start = start + 1; phase1Start < end; phase1Start++)
		{
			///check for greater number from first two elements, then next two and so on till end
			if (DescendingArr[phase1Start] > DescendingArr[phase1Start - 1])
				///swap if a greater number is found
				swap(&DescendingArr[phase1Start], &DescendingArr[phase1Start - 1]);
		}
		/// Decrement the end as we are getting the smallest sorted number in the end
		end--;

		/// Phase 2 of array goes from right to left and brings the greatest number to the start
		for (phase2Start = end - 1; phase2Start > start; phase2Start--)
		{
			///check for smaller number from first two elements, then next two and so on till end
			if (DescendingArr[phase2Start] > DescendingArr[phase2Start - 1])

				///swap if a smaller number is found
				swap(&DescendingArr[phase2Start], &DescendingArr[phase2Start - 1]);
		}
		/// Increment the start as we are getting the greatest sorted number in the start
		start++;
	}
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
	
	///for a well-formatted console ouput
	cout << "\n---------------------------------------------------------------------------------------------------\n";
	cout << "\tNow let's sort your Array using Shaker Sort Algorithm in Ascending Order" << endl;
	
	///start the clock before sorting the array in Ascending Order
	auto start1 = chrono::high_resolution_clock::now();

	///call the function for sorting array in Ascending Order
	ShakerSortAscending(myArray, noOfElements);

	///stop the clock after sorting the array in Ascending Order
	auto end1 = chrono::high_resolution_clock::now();

	/// Calculating total time taken by the program by subracting start time from end time
	double time_taken1 = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();

	///Converting nanoseconds to seconds
	time_taken1 *= 1e-9;

	///Print sorted Array in Ascending Order
	cout << "\n\tYour Sorted Array is: \n ";

	///for displaying all the array elements to the user 
	for (i = 0; i < noOfElements; i++)
		cout << " | " << myArray[i];

	/// to write floating-point values in fixed point notations upto 9 decimal places
	cout << "\n\nTime taken by program is : " << fixed << time_taken1 << setprecision(9)<< " seconds" << endl;

	///for a well-formatted console ouput
	cout << "\n---------------------------------------------------------------------------------------------------\n";
	cout << "\tNow let's sort your Array using Shaker Sort Algorithm in Descending Order" << endl;

	///start the clock before sorting the array in Descending Order
	auto start2 = chrono::high_resolution_clock::now();

	///call the function for sorting array in Descending Order & pass the copy of array
	ShakerSortDescending(copyMyArray, noOfElements);

	///stop the clock after sorting the array in Descending Order
	auto end2 = chrono::high_resolution_clock::now();

	/// Calculating total time taken by the program by subracting start time from end time
	double time_taken2 = chrono::duration_cast<chrono::nanoseconds>(end2 - start2).count();

	///Converting nanoseconds to seconds
	time_taken2 *= 1e-9;

	///Print sorted Array in Descending Order
	cout << "\n\tYour Sorted Array is: \n ";

	///for displaying all the array elements to the user 
	for (i = 0; i < noOfElements; i++)
		cout << " | " << copyMyArray[i];

	/// to write floating-point values in fixed point notations upto 9 decimal places
	cout << "\n\nTime taken by program is : " << fixed << time_taken2 << setprecision(9)<<" seconds" << endl;
	
	///return 0 if program executed successfully because main function is of type integer
    return 0;
}