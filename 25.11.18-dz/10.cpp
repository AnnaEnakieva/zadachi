/*Напишите функцию вычисляющую праймориал числа. Программа должна работать не более чем за O(n*log log n) шагов.*/
#include <iostream> 
using namespace std; 
int prime(bool *a, int b) 
{ 
  int mult = 1; 
  bool *massiv = new bool[b + 1]; 
  massiv[0] = massiv[1] = 0; 
  for (int i = 2; i <= b; i++) 
    { 
  massiv[i] = 1; 
  for (int i = 2; i <= b; i++) 
        { 
          if (massiv[i]) 
            { 
              for (int j = i + i; j <= b; j += i) 
                  massiv[j] = 0; 
              }
         }
}
if (massiv[i] == 1) 
  { 
    mult *= i; 
  } 
}

return mult; 
} 
int main() 
{ 
int n; 
cin » n; 
bool *array = new bool[n + 1]; 
cout « prime(array, n); 
return 0; 
}
