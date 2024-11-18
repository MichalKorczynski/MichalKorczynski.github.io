#include <iostream>

long long sum(long long n) {
	if(n<10) {
		return n;
	}
	return n%10 + sum(n/10);
}

int main() {
	std::cout<<"Enter number: ";
	long long i;
	std::cin>>i;
	std::cout<<std::endl;
	std::cout<<sum(i)<<std::endl;
	return 0;
}
