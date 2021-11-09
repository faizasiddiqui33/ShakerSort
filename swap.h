/*****************************************************************************************************************************
    Module Name: Swap Function
    @author: Faiza Fatma Siddiqui
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