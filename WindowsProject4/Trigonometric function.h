#pragma once
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<stdio.h>
#include"Four arithmetic operations.h"
#include"Other calculations.h"
#include"mathandPhysicsdefine.h"

double sinc(double x1,double r)
{
	double y = 0;
	y = sin(x1);
	y *= r;
	printf("%lf", y);
	return y;
}
double cosc(double x2, double r)
{
	double y = 0;
	y = cos(x2);
	y *= r;
	printf("%lf", y);
	return y;
}
double tanc(double x3, double r)
{
	double y = 0;
	y = tan(x3);
	y *= r;
	printf("%lf", y);
	return 0;
}