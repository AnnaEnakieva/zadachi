/*Реализуйте метод секущих вычисления корня уравнения.*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double find(double x0, double x1, double eps)
{
  double rez = x1, f0, f;
  int iter = 0;
  cout << "x0= " << x0 << " x1= " << x1 << " ";
  do {
    f = sin(M_PI*rez / 180) - 1 / rez;
    f0 = sin(M_PI*x0 / 180) - 1 / x0;
    rez = rez - f / (f - f0)*(rez - x0);
    iter++;
  } while (fabs(f) > eps && iter<20000);
  cout << iter << " iterations" << endl;
  return rez;
}

int main() 
{
  cout << find(1.0, 10.0, 0.000001);
  cin.get(); 
  return 0;
}
