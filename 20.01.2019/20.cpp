/*Имеется набор данных, состоящий из пар положительных целых чисел.
Необходимо выбрать из каждой пары ровно одно число так, чтобы сумма всех
выбранных чисел не делилась на 3 и при этом была максимально возможной.
Если получить требуемую сумму невозможно, в качестве ответа нужно выдать 0.
Напишите программу для решения этой задачи.*/

#include "pch.h"
#include <iostream> 
using namespace std;
int main()
{
	int result = 2147483646;
	int N, A, B, MAX, MIN, sum = 0, MAX_MIN;
	MAX_MIN = result + 1;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> A >> B;
		if(A > B)
		{
			MAX = A;
			MIN = B;
		}
		else
		{
			MAX = B;
			MIN = A;
		}
		sum = sum + MAX;
		if(((MAX - MIN) % 3 != 0) && (MAX - MIN < MAX_MIN))
		MAX_MIN = MAX - MIN;
	}
	if(sum % 3 == 0)
	{
		if (MAX_MIN > result)
			sum = 0;
		else
			sum -= MAX_MIN;
	}
	cout << sum;
	return 0;
}
