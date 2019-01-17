/* Дан целочисленный массив из N элементов. Напишите программу, позволяющую
найти и вывести произведение элементов массива, которые имеют нечётное
значение и делятся на 3. Гарантируется, что в исходном массиве есть хотя бы
один элемент, значение которого нечётно и кратно 3. Программа должна быть
эффективна по времени и памяти.*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int i, comp = 1, n;
	cin >> n;
	int s[] = {0};
	for(i = 1; i < n; i++)
	{
		cin >> s[i];
	}
	for(i = 1; i < n; i++)
	{
		if(s[i] % 2 != 0 && s[i] % 3 == 0)
       comp = comp * s[i];
	}
	cout << comp;
	return 0;
}
