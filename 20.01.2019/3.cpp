#include <iostream>
#include <math.h>
using namespace std;
bool kvadrat( int y )
{
    float n, k;
    bool a;// n- корень, k = y
    k = (float)y;
    n = sqrt(k);
    if ( n == int(n) )
        a = true;
    else a = false;
    return a;
}

int R( int x, int y, int z)
{
    int n = 0;
    if ( x < y && y != z)
    {
        //n = R( x, y-1, z);
        if ( y % 5 == 0 )
            n = n + R( x, y/5, z );
        if ( kvadrat( y ) == true )
            n = n + R( x, sqrt(y), z);
        if ( y % 3 == 0 )
            n = n + R( x, y / 3, z);
        if ( y % 10 == 2 )
            n = n + R( x, y / 10, z);
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
    int x, y, n, z;
    cin >> x >> y >> z;
    n = R( x, y, z);
    if ( n == 0)
       cout << "NO";
    if ( n != 0)
        cout << "YES";
    return 0;
}
