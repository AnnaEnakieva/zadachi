#include <iostream>
using namespace std;
int main()
{
	int m, x, max_a, max_a_ch, n; // четные
	long int pr = 1000001, max_pr = 1000001;
	int *a = new int(6);
  max_a = n+1;
  max_a_ch = n+1;
		cin >> m;
	for (int i = 1; i < 6; i++) 
		cout << a[i];
	for( int i = 7; i < m; i++)
	{
		cin >> x;

		if(a[1] > max_a)
			max_a = a[1];
		if((a[1] % 2 == 0) && (a[1] > max_a_ch))
			miax_a_ch = a[1];
		if(x % 2 == 0)
			pr = x * max_a;
		else if(max_a_ch > n+1)
			pr = x * max_a_ch;
		if(pr > max_pr)
			min_pr = pr;
		for( int j = 1; j < 5; j++)
			a[j] = a[j + 1];
		a[6] = x;
	}
	if (max_pr = 1000001)
		max_pr = -1;
	cout << max_pr;
}
