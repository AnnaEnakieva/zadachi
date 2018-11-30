/*Напишите эффективную функцию, выписывающую из массива длины n все элементы, у которых количество двоек в троичной записи
меньше k. Функция должна возвращать общее количество двоек в троичной записи всех чисел массива. В комментариях напишите, 
почему перебор - эффективный*/

#include <iostream>
using namespace std;

int musly (int* a, int b, int c)
{
int bum = 0;
for (int i = 0; i < b; i++)
{
int mub = 0, ac = a[i];
while (ac > 1)
{
if ((ac % 3) == 2) {bum++; mub++;};
ac /= 3;
};
if (mub < c) {cout « a[i] « " ";};
};
cout « '\n';
return bum;
}

int main()
{
int n, k;
cin » n » k;

int* Nu_pochemy = new int [n];
for (int i = 0; i < n; i++)
{
cin » Nu_pochemy[i];
};

cout « musly(Nu_pochemy, n, k);
return 0;
}
