#include <iostream>

int fib(int x) {
	if(x==1 || x==0) {
		return x;
	}else {
		return fib(x-1)+fib(x-2);
	}
}

int main() {
	int x;
	int f;
	int i = 0;
	std::cout<<"Enter 1 or 2: ";
	std::cin>>x;
	std::cout<<std::endl;
	std::cout<<"Enter number: ";
	std::cin>>f;
	std::cout<<std::endl;
	if(x==1) {
		while (i<f) {
			std::cout<<" "<<fib(i);
			i++;
		}
		std::cout<<std::endl;
	}
	else {
		std::cout<<" -> "<< fib(f-1);
		std::cout<<std::endl;
	}

	return 0;
}
