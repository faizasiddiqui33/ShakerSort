/*****************************************************************************************************************************
    * @file swap.h
    * @brief  Module Name is Header file for Swap Function
    * @author Faiza Fatma Siddiqui
    * @date   11-11-2021 (Modified/Created)
    * @details This header file has a function takes the help of a third temporary variable to interchange the values of two variables
    * Purpose  :To swap values using call by reference
	* Method Output: The values of 2 given variables are interchanged
    * @bug    No known bugs.
	* @warning Improper use can crash the program
*****************************************************************************************************************************/
///@file swap.h
#ifndef SWAP_H
#define SWAP_H

/*****************************************************************************************************************************
    * @brief  Module Name is Swap Function
    * @author Faiza Fatma Siddiqui
    * @date   11-11-2021 (Modified/Created)
    * @details This function takes the help of a third temporary variable to interchange the values of two variables
    * Description: The Purpose of this function is to swap values using call by reference
    * @param[in,out] first_variable* - This parameter takes the address of a variable to be swapped which is of integer type
	* @param[in, out] second_variable* - This parameter takes the address of another variable to be swapped which is of integer type
    * @return null 
	* @pre Precondition: address of Only integer values should be passed
	* @post Postcondition: values of 2 variables are interchanged
	* Method Output: The values of 2 given variables are interchanged
    * @bug No known bugs.
*****************************************************************************************************************************/

void swapp(int *first_variable, int *second_variable)
{
	///temporary variable to help in swapping
	int temporary_variable;

	///storing address of first variable in temporary variable, so that it is not lost
	temporary_variable = *first_variable;

	///replacing the address of first variable with second variable
	*first_variable = *second_variable;

	///storing the address of first variable which was in temp to second variable
	*second_variable = temporary_variable;
}
#endif