// QuickSort.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void SortQuick(int*, int, int);

int _tmain(int argc, _TCHAR* argv[])
{
	int count;
	cout << "��������Ҫ��������Ĵ�С:";
	cin >> count;
	int* values = new int[count];

	cout << "���������ݣ�";
	for (int i = 0; i < count; i++)
	{
		cin >> values[i];
	}

	SortQuick(values, 0, count-1);

	for (int i = 0; i < count; i++)
	{
		cout << values[i] << "    ";
	}
	system("pause");
	return 0;
}

void SortQuick(int* sortValues, int left, int right)
{
	int baseValue = sortValues[left];
	int i, j;
	i = left + 1;
	j = right;

	if (left >= right)
	{
		return;
	}

	while (i < j)
	{
		while (sortValues[j] > baseValue && j > i)
		{
			j--;
		}
		while (sortValues[i] < baseValue && j > i)
		{
			i++;
		}
		int temp;
		temp = sortValues[i];
		sortValues[i] = sortValues[j];
		sortValues[j] = temp;
	} 

	if (sortValues[left] > sortValues[j])
	{
		sortValues[left] = sortValues[j];
		sortValues[j] = baseValue;
	}

	SortQuick(sortValues, j + 1, right);
	SortQuick(sortValues,left,i - 1);
	

}