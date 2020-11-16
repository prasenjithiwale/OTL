#include<iostream>
#include<string>
#include "sort.h"
#include "main.h"

using namespace own;
void check() {
	std::string arr[] = { "int","zebra","aplha","crone","aac","beta","string" };
	int n = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < 7; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout  << std::endl;

	Sort<std::string> a(arr, n);

	for (int i = 0; i < 7; i++) {
		std::cout << arr[i] << " ";
	}
}