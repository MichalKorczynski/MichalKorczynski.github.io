#include <iostream>

int factorial(int n) {
	if(n<1) {
		return 1;
	}
	
	return n*factorial(n-1);
}

int main() {
	int number;
	std::cout<<"Enter number: ";
	std::cin>>number;
	std::cout<<"Factorial ("<<number<<") = "<<factorial(number)<<std::endl;
	return 0;
}
