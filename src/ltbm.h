#pragma once
#include <vector>

//adds two numbers and returns value
namespace ltbm{
	int add(int a,int b);
	float add(float a,float b);
	double add(double a,double b);

	int add(int arr[]);
	float add(float arr[]);
	double add(double arr[]);

//returns number of values in an array
	int arrsize(int arr[]);
	int arrsize(char arr[]);
	int arrsize(float arr[]);
	int arrsize(double arr[]);
	//int arrsize(std::string arr[]);

//returns the maximum value in an array
	int max(int nums[]);
	float max(float nums[]);
	double max(double nums[]);

	int max(std::vector<int> nums);
	float max(std::vector<float> nums);
	double max(std::vector<double> nums);

// returns the input number truncated to given position
	float trunc(float num,int pos);
	double trunc(double num,int pos);
}
