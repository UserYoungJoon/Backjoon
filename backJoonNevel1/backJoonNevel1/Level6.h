#pragma once

#include <iostream>
#include <vector>

using namespace std;

//정수 N개의 합 
long long sum(std::vector<int>& a);
void problem15596(std::vector<int>& a)
{
	sum(a);
}

long long sum(std::vector<int>& a)
{
	long long sum = 0;

	for (auto nowNumber : a)
	{
		sum += nowNumber;
	}

	return sum;
}
