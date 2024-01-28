#include "max.h"

/*
int ltbm::max(int nums[]){
	int max=0;
	for(int i=0;i<sizeof(nums);i++){
		if(nums[i]>max){max=nums[i];}
	}
	return max;
}

float ltbm::max(float nums[]){
	float max=0.0;
	for(int i=0;i<sizeof(nums);i++){
		if(nums[i]>max){max=nums[i];}
	}
	return max;
}

double ltbm::max(double nums[]){
	double max=0.0;
	for(int i=0;i<sizeof(nums);i++){
		if(nums[i]>max){max=nums[i];}
	}
	return max;
}
*/

//VECTOR
int ltbm::max(std::vector<int> nums){
	int max=0;
	for(int i=0;i<sizeof(nums);i++){
		if(nums[i]>max){max=nums[i];}
	}
	return max;
}

float ltbm::max(std::vector<float> nums){
	float max=0.0;
	for(int i=0;i<sizeof(nums);i++){
		if(nums[i]>max){max=nums[i];}
	}
	return max;
}


double ltbm::max(std::vector<double> nums){
	double max=0.0;
	for(int i=0;i<sizeof(nums);i++){
		if(nums[i]>max){max=nums[i];}
	}
	return max;
}
//TODO: add more data types
