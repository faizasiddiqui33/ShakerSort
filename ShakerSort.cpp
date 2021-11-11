/*****************************************************************************************************************************
	@file ShakerSort.cpp
    @brief Module Name is Shaker Sort Algorithm
    @author: Faiza Fatma Siddiqui, Student ID: 200473896
    @date 11-11-2021 (Created & Modified)
    @details This program prompts the user to determine the size of array. 
		- It restricts the user from entering any invalid entries for size of array and allows to enter only positive whole numbers.
		- It generates a random array of the size given by the user.
		- It sorts the array in Ascending order using Shaker Sort Algorithm.
		- It sorts the array in Descending order using Shaker Sort Algorithm.
		- It prints the time taken to perform both sortings.
    Purpose: CS 700 - Software Development Fundamentals - Assignment 4 
	Method Output: An array is sorted in ascending and descneding order & printed. The time taken in both sortings is calculated & printed.
    @bug No known bugs.
	@warning Improper use can crash the program while taking input from the user
*****************************************************************************************************************************/

/// This header file includes all standard libraries
#include <bits/stdc++.h>

/// chrono library deals with time, by means of clocks, time points, durations
#include <chrono>

///header file that contains swap function
#include "swap.h"

/// This file includes all standard libraries
using namespace std;

/*****************************************************************************************************************************
    @brief Module Name is Shaker Sort Function - Ascending Order
    @author Faiza Fatma Siddiqui
    @date 11-11-2021 (Created & Modified)
    @details Purpose is to sort an array in Ascending order using Shaker Sort Algorithm. This function takes 2 parameters: integer array & integer array size
        @param int AscendingArr[] - receives the randomly generated array to be sorted of integer type
		@param int arraySize - takes the size of the array of integer type
        @return null
	@pre Precondition: integer type of array and array size should be passed as arguments
	@post Postcondition: All the elements of the array gets sorted in Ascending Order
	Method Output: All the elements of the AscendingArr[] array gets sorted in Ascending Order
	@bug No known bugs.
	@warning Improper use can crash the program

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
			///@if greater number from first two elements, then swap and check for next two and so on till end
			if (AscendingArr[phase1Start] < AscendingArr[phase1Start - 1])

				///swap if a greater number is found
				swapp(&AscendingArr[phase1Start], &AscendingArr[phase1Start - 1]);
				///@endif
		}
		/// Decrement the end as we are getting the greatest sorted number in the end
		end--;

		/// Phase 2 of array goes from right to left and brings the smallest number to the start
		for (phase2Start = end - 1; phase2Start > start; phase2Start--)
		{
			///@if smaller number from first two elements, then swap and check previous two and so on till start
			if (AscendingArr[phase2Start] < AscendingArr[phase2Start - 1])

				///swap if a smaller number is found
				swapp(&AscendingArr[phase2Start], &AscendingArr[phase2Start - 1]);
				///@endif
		}
		/// Increment the start as we are getting the smallest sorted number in the start
		start++;
	}
}

/*****************************************************************************************************************************
    @brief Module Name is Shaker Sort Function - Descending Order
    @author: Faiza Fatma Siddiqui
    @date 11-11-2021 (Created & Modified)
    @details Purpose is to sort an array in Descending order using Shaker Sort Algorithm. This function takes 2 parameters: integer array & integer array size
    Description: This function sorts an array in Descending order using Shaker Sort Algorithm
        @param: int DescendingArr[] - receives the randomly generated array to be sorted of integer type
		@param: int arraySize - takes the size of the array of integer type
        @return null
	@pre Precondition: integer type of array and array size should be passed as arguments
	@post Postcondition: All the elements of the array gets sorted in Descending Order
	Method Output: All the elements of the DescendingArr[] array gets sorted in Descending Order
	@bug No known bugs.
*****************************************************************************************************************************/
void ShakerSortDescending(int DescendingArr[], int arraySize)
{
	///assigning arraysize as end, just for better understanding & code readability when using loops in the function
	int end = arraySize;

	///set the start value to the first element of the array
	int start = 0;

	/// variables for starting point of both phases
	int phase1Start, phase2Start;
	// bool swapped;
	///this loop will run from start of the array till the end of array
	while (start<end)
	{	
		//swapped=false;
		///Phase 1 of array goes from left to right and brings the smallest number to the end
		for (phase1Start = start + 1; phase1Start < end; phase1Start++)
		{
			///@if greater number from first two elements, then swap and check next two and so on till end
			if (DescendingArr[phase1Start] > DescendingArr[phase1Start - 1])
			
				///swap if a greater number is found
				swapp(&DescendingArr[phase1Start], &DescendingArr[phase1Start - 1]);
				//swapped = true;
				///@endif 
			
		}
		// if (!swapped)
        //     break;
 
        // // otherwise, reset the swapped flag so that it
        // // can be used in the next stage
        // swapped = false;
		/// Decrement the end as we are getting the smallest sorted number in the end
		end--;

		/// Phase 2 of array goes from right to left and brings the greatest number to the start
		for (phase2Start = end - 1; phase2Start > start; phase2Start--)
		{
			///@if smaller number from first two elements, then swap, then check next two and so on till start
			if (DescendingArr[phase2Start] > DescendingArr[phase2Start - 1])

				///swap if a smaller number is found
				swapp(&DescendingArr[phase2Start], &DescendingArr[phase2Start - 1]);
				// swapped = true;
				///@endif 
		}
		/// Increment the start as we are getting the greatest sorted number in the start
		start++;
	}
}


/*****************************************************************************************************************************
    @brief Module Name is Main Function
    @author: Faiza Fatma Siddiqui
    @date 11-11-2021 (Created/Modified)
    @details Purpose is to print message to user, to print the sorted array in a Ascending order & Descending order using Shaker Sort Algorithm
    Description: This function prompts the user to determine the size of array. 
		- It restricts the user from entering any invalid entries for size of array and allows to enter only positive whole numbers.
		- It generates a random array of the size given by the user and prints it
		- It calls the function for sorting array in Ascending order & displays the sorted array
		- It calls the function for sorting array in Descending order & displays the sorted array
		- It prints the time taken to perform both sortings.
        @param: None
        @return integer - 0 if program executed successfully, else nonzero will be returned
	@pre Precondition: None
	@post Postcondition: Prints the array in ascending and descending order using Shaker Sort & also the time taken in both sortings
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
	while ((cin.fail()) || (checkforFloatNo - floor(checkforFloatNo)) || (checkforFloatNo <= 1))
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
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------";
	
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
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\tNow let's sort your Array using Shaker Sort Algorithm in Ascending Order" << endl;
	
	///start the clock before sorting the array in Ascending Order
	auto start_ascending_sort = chrono::high_resolution_clock::now();

	///call the function for sorting array in Ascending Order
	ShakerSortAscending(myArray, noOfElements);

	///stop the clock after sorting the array in Ascending Order
	auto end_ascending_sort = chrono::high_resolution_clock::now();

	/// Calculating total time taken by the program by subracting start time from end time
	double time_taken_ascending_sort = chrono::duration_cast<chrono::nanoseconds>(end_ascending_sort - start_ascending_sort).count();

	///Converting nanoseconds to seconds
	time_taken_ascending_sort *= 1e-9;

	///Print sorted Array in Ascending Order
	cout << "\n\tYour Sorted Array is: \n ";

	///for displaying all the array elements to the user 
	for (i = 0; i < noOfElements; i++)
		///@if it is the first element, then do not display the line for a well-formatted console output
		if(i==0)
		cout<<myArray[0]<<" ";
		///@else if it is any element after first element, then display the line for a well-formatted console output
		else
		cout << "  |  " << myArray[i];
		///@endif 

	/// to write floating-point values in fixed point notations upto 9 decimal places
	cout << "\n\nREPORT:\nTime taken to sort array of "<<noOfElements<<" elements in Ascending Order is : " << fixed << time_taken_ascending_sort << setprecision(9)<<" seconds" << endl;


	///for a well-formatted console ouput
	cout << "\n------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\tNow let's sort your Array using Shaker Sort Algorithm in Descending Order" << endl;

	///start the clock before sorting the array in Descending Order
	auto start_descending_sort = chrono::high_resolution_clock::now();

	///call the function for sorting array in Descending Order & pass the copy of array
	ShakerSortDescending(copyMyArray, noOfElements);

	///stop the clock after sorting the array in Descending Order
	auto end_descending_sort = chrono::high_resolution_clock::now();

	/// Calculating total time taken by the program by subracting start time from end time
	double time_taken_descending_sort = chrono::duration_cast<chrono::nanoseconds>(end_descending_sort - start_descending_sort).count();

	///Converting nanoseconds to seconds
	time_taken_descending_sort *= 1e-9;

	///Print sorted Array in Descending Order
	cout << "\n\tYour Sorted Array is: \n ";

	///for displaying all the array elements to the user 
	for (i = 0; i < noOfElements; i++)
		///@if it is the first element, then do not display the line for a well-formatted console output
		if(i==0)
		cout<<copyMyArray[0]<<"  ";
		///@else if it is any element after first element, then display the line for a well-formatted console output
		else
		cout << " ->  " << copyMyArray[i];
		///@endif 

	/// to write floating-point values in fixed point notations upto 9 decimal places
	cout << "\n\nREPORT:\nTime taken to sort array of "<<noOfElements<<" elements in Descending Order is : " << fixed << time_taken_descending_sort << setprecision(9)<<" seconds" << endl;
	
	///return 0 if program executed successfully because main function is of type integer
    return 0;
}