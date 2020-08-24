/* 
In this example 
*/
#include <iostream>

void printArray(int* arg)
{

	while(arg)
	{
		std::cout << *arg << std::endl;
		arg++;
	}
}

int main(void) 
{
	int arr[] = {1, 2, 3, 4};
	printArray(arr);
}

