#include <iostream>

void User_Input(int& variable1, int& variable2);
int Add_Numbers(int variable1, int variable2);

int main(void)
{
	//initialize variables
	int variable1 = 0, variable2 = 0;

	//ask for user input
	User_Input(variable1, variable2);

	std::cout << "The resulting sum is: " << Add_Numbers(variable1, variable2) << std::endl;

}