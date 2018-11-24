/* Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k.
В комментариях напишите, почему перебор - эффективный */ 

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n]={};
    for (int i = 0; i<n; i++)
    {
        a[i]=rand();
        cout << a[i]<< endl;
       
    }
    int k, sum=0,s;
   for (int i = 0; i<n; i++)
   {
    while (a[i]>0)
    {
        s=a[i]%10;
        if (s!=0)
        {
            sum = sum *s; 
        }
       a[i]=a[i]/10;
    }
    cout << sum <<endl;
   }
    return 0;
}



