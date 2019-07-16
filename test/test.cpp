// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int> &num, int low, int high)
{
	if (low >= high) { return; }

	int p = num[low];
	int l = low, r = high;
	while (l < r)
	{
		while (l < r && num[r] >= p)
			--r;
		num[l] = num[r];
		while (l < r && num[l] <= p)
			++l;
		num[r] = num[l];
	}
	num[l] = p;

	quickSort(num, low, l - 1);
	quickSort(num, l + 1, high);
}

void pout(vector<int> num)
{
	for (auto n : num) {
		cout << n << '\t';
	}
	cout << endl;

	return;
}


int main()
{
	vector<int> num{ 5, 7, 4, 3, 2, 1, 6 };

	pout(num);
	quickSort(num, 0, num.size() - 1);
	pout(num);

	std::cout << "Hello World!\n";
	return 0;
}
