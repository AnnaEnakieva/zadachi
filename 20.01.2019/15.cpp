/*Напишите программу, находящую для заданной последовательности длины N
целых чисел необходимо: минимальное произведение двух её элементов, номера
которых различаются не менее чем на 5. Программа должна быть эффективной по
времени и памяти.*/

#include <iostream>
using namespace std;
int main()
{
		int N, x, i, minx = 0, d = 5 ;
		int *a = new int(d-1);
int min = 0; //{ максимальное значение произведения}
cin >> N;
for (i = 1; i < d ; i++)
{
	cin >> x;
	a[ i % d ] = x;
}
for(i = d + 1; i < N; i++)
{
	cin >> x;
	if(a[i % d] < minx)
		minx = a[i % d];
	if(x + minx < min)
		min = x + minx;
	a[i % d] = x;
}
delete a;
cout << min;
}
