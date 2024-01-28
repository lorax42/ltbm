#include "trunc.h"
#include <math.h>

float ltbm::trunc(float num,int pos){
	int mod=pow(10,pos);
	num*=mod;
	num=(int)num;
	num/=mod;
	return num;
}

double ltbm::trunc(double num,int pos){
	int mod=pow(10,pos);
	num*=mod;
	num=(int)num;
	num/=mod;
	return num;
}

