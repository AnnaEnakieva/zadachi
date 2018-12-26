/*Напишите программу, находящую разложение целого числа в сумму точных квадратов, так чтобы количество слагаемых было
минимальным.*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 1; i < n; i++) {
		A[i] = -1;
	}
	for (int i = 1; i < n; i++) {
		if (i * i > n)
			break;
		A[i] = i * i;
	}
	int t = 0,q =0;
	for (int i = n - 1; i > 0; i--) {
		if (A[i] != -1) {
			if (q + A[i] <= n) {
				while (t + q <= n) {
					t += A[i];
				}
				t -= A[i];
				q += t;
				cout << t << " ";
			}
		}
		t = 0;
	}



	return 0;
}

