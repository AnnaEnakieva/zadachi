/*
Напишите программу вычисляющую среднее арифметическое
последовательности чисел. Длина последовательности неизвестна, однако
последовательность оканчивается нулем и других нулевых значений не
встречается. В программе запрещается использовать дополнительную
память(aka массивы, списки…)
*/
#include <iostream>
#include <numeric>
using namespace std;
int main() 

{
   int a, sum, k;
   cin >> a;
   
   while (a!=0)
   {
       sum+=a;
       k++;
       cin >> a;
   }
   
   cout << sum/(k+1);
   
}