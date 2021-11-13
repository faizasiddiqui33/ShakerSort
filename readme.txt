There are 5 files:
1. Output Screenshots: VS Code and Command Prompt
2. Github repository & version history screenshots
3. The Source Code(ShakerSort.cpp file)
4. The Header File(swap.h)
5. Doxygen generated html file - check index.html in that folder

This program has been tested and can be run in Visual Studio Code & Command Prompt on Windows 10 with Mingw C++ Compiler

Github link for this program:
https://github.com/faizasiddiqui33/ShakerSort-Assignment4.git

ShakerSort.cpp is a C++ program that is a user-friendly and it does the following:
	- Prompts the user to determine the size of array. 
	- It restricts the user from entering any invalid entries for size of array and allows to enter only positive whole numbers.
	- It generates a random array of the size given by the user.
	- It sorts the array in Ascending order using Shaker Sort Algorithm.
	- It sorts the array in Descending order using Shaker Sort Algorithm.
	- It prints the time taken to perform both sortings.

First the user is asked to enter the number of elements it wants to sort in the array.
If the user enters any alphabets, symbols, negative numbers or decimal numbers - an error message is displayed. And input is taken again.
If the user enters 0 or 1 - an error message is displayed and input is taken again because array sorting cannot be done on array of 0 or 1 element

A function has not been used for printing the array because both ascending array and descending array is printed in different ways, 
to easily understand the difference between two arrays when array size is large. This also helps in a well-formatted console output.

Shaker Sort Program has two phases:
	Phase 1: First loop goes from start to end. 
	Checks every two elements of the array, if greater number is found -> swap. This will moves the greatest number to the end.
	Phase 2: Second loop goes from end to start. 
	Checks every two elements of the array, if smaller number is found -> swap. This will moves the smallest number to the start.
Both these phases are repeated for all the elements of the array until the array gets sorted. 

The above sorting is done by calling two different functions: One for ascending order and other for descending order. 

Before calling the ascending order sort function, a timer is started and stopped. Then time taken is calculated 
by subtracting the start time from the end time. This time is then reported.

Before calling the descending order sort function, a timer is started and stopped. Then again time taken is calculated and reported.

Swapping of numbers for sorting is done with the help of a separate function -> swapp() which calls the function by reference
