/*Напишите программу позволяющую эффективно проверять принадлежность пары значений массиву. Например, пара (2,3) принадлежит 
массиву [1,2,3,5,7,11,13,17], а пара (3,4) - нет. Можно считать, что количество запросов многократно превышает размер 
массива*/

#include "pch.h" 
#include "iostream" 
#include <vector> 

using namespace  std; 
int main() 
{ 
  int n, s = 0; 
  cin >> n; 
  vector <int> a(n); 
  int p, q; 



  for(int i = 0; i < n; i++) 
  cin >> a[i]; 

  cin >> p >> q; 

  for(int j = 0; j < n; j++) 
  { 
    if(a[j] == p) 
    { 
      s++; 
      break; 
    } 
  } 

  for(int h = 0; h < n; h++) 
  { 
    if(a[h] == p) 
    { 
      s++; 
      break; 
    } 
  } 

  if(s == 2) 
    cout « "YES"; 

  else 
    cout « "NO"; 

  return 0; 
}
