//References are aliases of varaibles that can be used interchangeably. 
int number = 5;

int& number_reference = number;

std::cout << number_reference << std::endl;
//Prints: 5
number_reference = 10;
std::cout << number;
//Prints: 10
