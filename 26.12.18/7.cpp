/*Напишите программу переводящую число в систему счисления с основанием k, где k не превышает 30.*/

#include <iostream>
using namespace std;
int main ()
{
    int a, k, t=0, a1;
    int s[100]={0};
    a1=a;
    //t-счетчик
    cin >> a >> k;
    
    if (k < 30)
    {
        while (a1 != 0)
        {
          a1 = a1 / k;
          t++;
        }
    
        for (int i=0; i<t; i++)
        {
            s[i] = a % k;
            a = a / k;
        }
        
        for (int i=t-1; i >= 0 ; i--)
        {
            cout << s[i];
        }
    }
    
}
