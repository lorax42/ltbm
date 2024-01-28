#include <iostream>
#include <ltbm.h>

int main(){
	float arr[]={1.234,2.345,3.456,4.567,5.678,6.789};
	std::cout
		<< "add: " << ltbm::add(arr)
		<< "\nmax: " << ltbm::max(arr)
		<< "\ntrunc: " << ltbm::trunc(arr[0],2)
		<< "\narrsize: " << ltbm::arrsize(arr) << "\n";
	
	return 0;
}
