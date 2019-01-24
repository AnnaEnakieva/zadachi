/*Напишите переборную программу, находящую для заданной последовательности
длины N целых чисел необходимо: максимальное произведение двух её
элементов, номера которых различаются не менее чем на 5. Программа может
быть неэффективной*/

#include <iostream>
using namespace std;
int main()
{
	int i, j, d = 5, n = 0, maxcomp;
	cin >> n;
	int *a = new int[n];
	for(i = 0; i < n; i++)
		cin >> a[i];
	maxcomp = 0;
	for(i = 1; i < n - d; i++)
	{
		for(j = i + d; j < n; j++)
		{
			if(a[i] + a[j] > maxcomp)
				maxcomp = a[i] * a[j];
		}
	}
	delete []a;
	cout << maxcomp;
	return 0;
}
