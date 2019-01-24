#include <iostream>
#include <math.h>
using namespace std;
// переменная, в которую мы сохраняем длину самой короткой программы
int H;
int *a; // массив, содержащий самую короткую программу
int *b;// массив, содержащий шаги
int R( int x, int y, int N)
{
    int n = 0;
    if ( x < y)
    {
        n = R( x, y-1, (N + 1));
        if ( y % 2 == 0 )
            n = n + R( x, y/2, N + 1);
        if ( y % 3 == 0)
            n = n + R( x, y/3, N + 1);
    }
    else if ( x == y)
    {
        n = 1;
        // дошли до конца программмы
        // мы должны сравнить длину данной программы с предыдущей (самой короткой)
        if ( N <  H )
        {
            H = N;
        }
    }
    return n;
}
int main()
{
    int x, y, n;
    cin >> x >> y;
    H = y - x;
    a = new int [H];
    b = new int [H];
    n = R( x, y, 0);
    cout << H;
    return 0;
}
