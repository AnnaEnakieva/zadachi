

#include "pch.h" 
#include <iostream> 
using namespace std; 
int main() 
{ 
  setlocale(LC_ALL, "Russian"); 
  int N; //{количество чисел} 
  int a; //{очередное число} 
  int digit; //{цифра числа} 
  int d[10]; //{подсчёт цифр} 
  int mx; //{максимальное количество цифр} 
  int i; 
  for (i = 0; i < 10; i++) 
    { 
      d[i] = 0;
    } 
  cout << "Введите количество чисел :" << endl; 
  cin >> N; 
  cout << "Введите числа по одному :" << endl; 
  for (i = 0; i < N; i++) 
    { 
      cin >> a; 
      while (a > 0) 
      { 
        digit = a % 10; 
        d[digit] = d[digit] + 1; 
        a = a / 10; 
      } 
    } 
mx = 0; 
for (i = 0; i < 10; i++) 
{ 
  if (d[i] > mx) 
    mx = d[i]; 
} 
for (i = 9; i >= 0; i--) 
  { 
    if (d[i] == mx) 
    cout << i << ' '; 
  } 
}
