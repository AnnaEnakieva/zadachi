/*
Напишите программу проверяющую является ли число составным. В
программе гарантируется, что число - натуральное
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int a, a2, i;
  cin >> a;
  a2=a/2;
  
  if (a==2 || a==3)
  {
      cout << "Prime";
  }
  
  else
  for (i=2; i<=a2; i++)
  {
      if (a%i==0)
      {
          cout << "Composite";
          break;
      }
      
      
      if (i=a2)
      { 
          cout << "Prime";
      }
  } 
}
