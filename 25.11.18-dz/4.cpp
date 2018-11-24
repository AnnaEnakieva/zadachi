/*Напишите программу находящую первые n составных чисел.*/

#include <iostream>
using namespace std;
int main ()
{
    
    int k, n, l = 0; // l - счетчик количества составных чисел
    cout << "n = ";
    cin >> n; // вводим количество составных чисеел
    cout << "Composite: ";
    for (k = 4; l < n; k++) // перебираем все числа, начиная с первого составного
    {
        for (int i = 2; i < k; i++)
        {
            if ((k % i) == 0)
            {
                cout << k << ' ';
                l++;
                break;
            }
        }
    }
    return 0;
}
