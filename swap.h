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