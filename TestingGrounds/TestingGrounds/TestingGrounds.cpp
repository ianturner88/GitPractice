int main(void)
{
	//initialize variables
	int variable1 = 0, variable2 = 0;

	//ask for user input
	User_Input(variable1, variable2);

	std::cout << "The resulting sum is: " << Add_Numbers(variable1, variable2) << std::endl;

}