#include "ltbm.h"

int ltbm::add(int a,int b){
	return(a+b);
}

float ltbm::add(float a,float b){
	return(a+b);
}

double ltbm::add(double a,double b){
	return(a+b);
}

int ltbm::add(int arr[]){
	int total;
	for(int i=0;i<ltbm::arrsize(arr);i++){
		total+=arr[i];
	}
	return total;
}

float ltbm::add(float arr[]){
	float total;
	for(int i=0;i<ltbm::arrsize(arr);i++){
		total+=arr[i];
	}
	return total;
}

double ltbm::add(double arr[]){
	double total;
	for(int i=0;i<ltbm::arrsize(arr);i++){
		total+=arr[i];
	}
	return total;
}

