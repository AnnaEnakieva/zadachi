/*Напишите функцию, заполняющую двумерный прямоугольный массив 
последовательными составными числами змейкой по часовой стрелке, начиная с нижнего левого угла. */

RE: инфа
От:
anton@ntkernel.com
Подробнее&
Сегодня, 23:26&
#include <stdio.h>

#include <stdlib.h>

#include <cmath>

#include <math.h>

 

using namespace std;

int zip(int k)

{

      int h = 0;

      if (k < 2)

      {

            return 0;

      }

      else

      {

            for (int j = 2; j <= (k/2); j++)

            {

                  if ((k % j) == 0)

                  {

                        h += 1;

                        return 0;

                        break;

                  }

            }

      }

 

      if (h == 0)

      {

            return 1;

      }

}

 

void duck(int** &a, int b, int c)

{

      int q = (b*c), k = 0;

      int* mir = new int [q];

      while (k < q)

      {

            for (int j = 4; 0 == 0; j++)

            {

                  if (zip(j) == 0)

                  {

                        mir[k] = j;

                        k++;

                        if (k == q) break;

                  };

            };

      };

      k = 0;

 

      b--; c--;

      int d = 0, e = c;

      int f = b, g = 0;

      int x = d, y = f;

 

      bool usl;

      double B = b, C = c;

      B = (B/C);

      if (B < 1) {B = (C/B);};

      B = rand(B);

      if (B >= 2)

      {

            usl = ((d <= e) && (f >= g));

      }

      else

      {

            usl = ((d <= e) || (f >= g));

      }

 

      while (usl)

      {

            x = d;

            y = f;

 

            while (y > g)

            {

                  if (f <= g) break;

                  a[y][x] = mir[k];

                  k += 1;

                  y -= 1;

            }

 

            while (x < e)

            {

                  if (d >= e) break;

                  a[y][x] = mir[k];

                  k += 1;

                  x += 1;

            }

 

            while (y < f)

            {

                  if (f <= g) break;

                  a[y][x] = mir[k];

                  k += 1;

                  y += 1;

            }

 

            while (x > d)

            {

                  if (d >= e) break;

                  a[y][x] = mir[k];

                  k += 1;

                  x -= 1;

            }

 

            d++; e--; f--; g++;

            if (B >= 2)

            {

                  usl = ((d <= e) && (f >= g));

            }

            else

            {

                  usl = ((d <= e) || (f >= g));

            }

 

      }

 

      b++; c++;

      if (((b % 2) != 0) && ((c % 2) != 0))

      {

            a [(b - 1)/2] [(c - 1)/2] = mir[q - 2];

      }

}

 

 

 

 

int main()

{

      int m, n;

      scanf("%d", &m);

      scanf("%d", &n);

 

      int** F = new int* [m];

      for(int z = 0; z < m; z++)

      {

            F[z] = new int [n];

      }

 

      int w = 3;

      if ((m*n) >= 10)

      {

            w += 2;

      }

 

      duck(F, m, n);

 

      for(int i = 0; i < m; i++)

      {

            for(int j = 0; j < n; j++)

            {

                  printf("%*d", w, F [i][j]);

            };

            printf("\n");

      }

}

 
    
