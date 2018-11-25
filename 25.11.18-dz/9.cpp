/*Напишите программу, находящую все простые числа Софи Жермен не превосходящие n. Программа должна работать не более чем за 
O(n*log log n) шагов.*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
bool krya(int n)
{
    int i=2, k=0;
    k=sqrt(n);
    while (((n% i)!=0) && (i<=k))
    {
        i++;
       
    }
     return i>k;
}
    int main ()
    {
        int i,n,m=0;
        
        cin >> n;
        
        for (i=0; i<n;i++)
        {
            if (krya(i) && krya(i*2+1) )
            {
                cout << i<<' ';
                m=1;
            }
        }
        if (m==0 )
            cout <<m;
        
        return 0;
    }
