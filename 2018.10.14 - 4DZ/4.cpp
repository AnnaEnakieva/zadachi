
/*
Напишите программу находящую в массиве сумму элементов делящихся либо
на 72 либо на 27(не вместе)
*/

#include <iostream>
using namespace std;
int main ()
{
   int N, sum=0;
   cin >> N;
   for (int i=0 ; i<n; i++) 
   {
     int a;
     cin >> a;
     if (((a%72==0) && ( a%27!=0)) || 
        ((a%72!=0) && ( a%27==0)) )
     {
        sum=sum+a;
     }
     
   }
   cout << sum;
   return 0;
}




