/*Напишите переборную программу, находящую для заданной последовательности
длины N неотрицательных целых чисел необходимо: минимальную сумму двух её
элементов, номера которых различаются не менее чем на 5. Программа может
быть неэффективной.*/

#include <iostream>
using namespace std;
int main()
{
int i, j, d = 5, n = 0, minsum;
cin >> n;
int *a = new int(n);
for (i = 1; i < n; i++ ) 
cin >> a[i];
minsum = 2001;
for(i = 1; i < n - d; i++)
{
	for(j = i + d; j < n; j++)
	{
		if (a[i] + a[j] < minsum)
			minsum = a[i] + a[j];
	}
}
cout << minsum;
	return 0;
}
