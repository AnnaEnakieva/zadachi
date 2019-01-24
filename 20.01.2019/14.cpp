/*Напишите программу, находящую для заданной последовательности длины N
неотрицательных целых чисел необходимо: максимальную сумму двух её
элементов, номера которых различаются не менее чем на 5. Программа должна
быть эффективной по времени и памяти*/

#include <iostream>
using namespace std;
int main()
{
		int N, x, i, maxx = 0, d = 5 ;
		int *a = new int(d-1);
int max = 0; //{ максимальное значение произведения}
cin >> N;
for (i= 0; i < d ; i++)
{
	cin >> x;
	a[ i % d ] = x;
}
for(i = d + 1; i < N; i++)
{
	cin >> x;
	if(a[i % d] > maxx)
		maxx = a[i % d];
	if(x + maxx > max)
		max = x + maxx;
	a[i % d] = x;
}
	delete a;
cout << max;
}
