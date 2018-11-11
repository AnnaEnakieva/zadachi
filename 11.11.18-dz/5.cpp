/*Напишите эффективную функцию, вычисляющую последнюю цифру числа, являющегося результатом возведения числа A в степень B. 
Числа A и B помещаются в тип long long. Количество действий выполняемых программой не должно превышать С1*(ln B)+ C2, где С1
и С2 – некоторые константы.*/

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    long long  a,b, c;
    cin >> a >> c;
    b= log (c);
    int n, m,d;
    cin >> n >> m;
    const int c1 = n; const int c2 = m;
    for (int i=0; i < (c1* b + c2); i++)
    {
        d=pow(a,b);
    }
    cout <<  d%10;
    return 0;
}
