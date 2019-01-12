#include <iostream>
#include <math.h>
using namespace std;
int R( int x, int y)
{
    int n = 0;
    if ( x < y)
    {
        n = R( x, y-1);
        if ( y % 2 == 0 )
            n = n + R( x, y/2 );
        if ( (y-1) % 2 == 0)
            n = n + R( x, ( y - 1 ) / 2 );
        if ( y % 10 == 0 )
            n = n + R( x, y / 10);
    }
    else if ( x == y)
    {
        n = 1;
    }
    //else n = 0; (переменная проинициализирована)
    return n;
}
int main()
{
    int x, y, n;
    cin >> x >> y;
    n = R( x, y);
    cout << n;
    return 0;
}
