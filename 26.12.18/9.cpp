/*Дана таблица размера MxN, заполненная числами. Напишите программу, находящую путь с наибольшей суммой из верхней левой
клетки в правую нижнюю, использующий только ход вправо и вниз на одну клетку. в ответе нужно выписать сумму значений из клеток 
на этом пути.*/

#include "pch.h"
#include <iostream>
using namespace std;
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	int N, M;
	cin >> N >> M;
	int **X;
	// creating
	X = new int *[N];
	for (int i = 0; i < M; i++) 
		X[i] = new int[M];
	for (int i = 0;i < M; i++) 
  {
		for (int j = 0; j < N; j++) 
			cin >> X[j][i];
		
	}
	for (int i = 0;i < M; i++) 
  {
		for (int j = 0; j < N; j++) 
    {
			if (i == 0) 
      {
				if (j == 0)
					X[j][i] = X[j][i];
				if (j != 0)
					X[j][i] += X[j-1][i];
			}
			else if (j == 0)
			X[j][i] += X[j][i - 1];
				else 
					X[j][i] += max(X[j-1][i], X[j][i - 1]);
		}
	}


	cout << X[N -1 ][M - 1];

	for (int i = 0;i < N; i++) 
		delete[] X[i];
	delete[] X;
	return 0;
}

