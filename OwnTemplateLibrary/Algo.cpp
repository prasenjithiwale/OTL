#include<iostream>
#include "algo.h"
#include "main.h"

using namespace own;
void check() {
	int arr[] = { 5,4,6,3,2,7,8,22,1 };
	Algo<int> a;
	for (auto a : arr)
		std::cout << a;
	std::cout << std::endl;
	a.Sort(arr, 9);
	for (auto a : arr)
		std::cout << a;
}