#include <iostream>

void User_Input(int& variable1, int& variable2);

int Add_Numbers(int variable1, int variable2);
int Multiply_Numbers(int variable1, int variable2);
int Subtract_Numbers(int variable1, int variable2);

int main(void)
{
	//initialize variables
	int variable1 = 0, variable2 = 0;

	//ask for user input
	User_Input(variable1, variable2);

	std::cout << "The resulting sum is: " << Add_Numbers(variable1, variable2) << std::endl;
	std::cout << "The resulting sum is: " << Subtract_Numbers(variable1, variable2) << std::endl;
	std::cout << "The resulting sum is: " << Multiply_Numbers(variable1, variable2) << std::endl;
}

int Subtract_Numbers(int variable1, int variable2)
{
	/*Add the two variables together*/

	return (variable1 - variable2);
}

void User_Input(int& variable1, int& variable2)
{
	/*Ask for user input*/

	//ask for value of variable one
	std::cout << "The value of variable one" << std::endl;
	//set value of variable one
	std::cin >> variable1;

	//ask for value of variable two
	std::cout << "The value of variable two" << std::endl;
	//set value of variable two
	std::cin >> variable2;
}

int Add_Numbers(int variable1, int variable2)
{
	/*Add the two variables together*/

	return (variable1 + variable2);
}

int Multiply_Numbers(int variable1, int variable2)
{
	/*Add the two variables together*/

	return (variable1 * variable2);
}