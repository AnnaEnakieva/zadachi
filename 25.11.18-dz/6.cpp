/*Напишите программу, находящую все простые числа Ченя не превосходящие n. Программа должна работать не более чем за O(n*log log 
n) шагов. */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool uhaha (int n)
{
    int i=3, max;
    bool f;
    
    
    max = sqrt(n);
    f = n != 1;
    if ((n > 2) && (n % 2 == 0))
        f = false;
    else
        while (i <= max)
        {
            if (n % i == 0)
            {
                f = false;
                break;
            }
            
            i = i + 2;
          }
    return f;
}
int main ()
{
    int n, i;
    
    cout << "n = ";
    cin>>n;
    for (i = 1; i<n;i++)
    {
        if (uhaha(i))
            cout << i<< ' ';
    }
}

