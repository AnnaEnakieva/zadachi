//поиск вершины, содержащей 3 моста
#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
int const n = 4; // chislo vershin v grafe
int timer, tin[n], fup[n];
int **nachalo;
int **konez;
bool used[n];
int mx[n][n];

void dfs (int v, int p = -1) // poisk v glubinu
{
    used[v] = true;
    tin[v] = fup[v] = timer++;
    for (int i = 0; i < n; ++i)
    {
        if(mx[v][i] == 1)
        {
            int to = i;
            if (to == p)  continue;
            if (used[to]) fup[v] = std::min (fup[v], tin[to]);
            else
            {
                dfs (to, v);
                fup[v] = std::min (fup[v], fup[to]);
                if (fup[to] > tin[v]) {
                    std::cout << "мосты: (" << v << " , " << to << ")\n";
                    for (int i = 0; i < n; i++)
                    {
                        *nachalo[i] = v;// начало моста
                        *konez[i] = to;//конец моста
                    }
                }
            }
        }
    }
}

void find_bridges() // poisk mostov
{
    
    timer = 0;
    for(int i = 0; i < n; ++i)
    {
        used[i] = false;
    }
    for(int i = 0; i < n; ++i)
    {
        if(!used[i]) dfs(i);
    }
}

int main()
{
    int k=0, nach=0, kon = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            std::cin >> mx[i][j];
        }
    }
    find_bridges();
    int B[n];
    int A[n];
    for(int i = 0; i < n; ++i){   //копируем массив А в массив В
        B[i] = *nachalo[i];
    }
    for(int i = 0; i < n; ++i){   //сравниваем элементы двух одинаковых массивов,т.е. как бы
        for(int j = 0; j < n; ++j){ //массив А сравнивается сам с собой
            if(B[j] == *nachalo[i])    //если элементы совпадают,значит есть повтор и
                k++;            //включается счетчик k
        }
        if(k == 4)//если n == 1,это означает что элемент из массива-копии встретил сам себя
            // в массиве-оригинале,это повтором не является.А вот если n >= 2, то это уже
            nach++;  //повтор и счетчик увеличивается на 1
        k = 0; //обнуляем счетчик для нового шага цикла
    }
    for(int i = 0; i < n; ++i){   //копируем массив А в массив В
        A[i] = *konez[i];
    }
    for(int i = 0; i < n; ++i){   //сравниваем элементы двух одинаковых массивов,т.е. как бы
        for(int j = 0; j < n; ++j){ //массив А сравнивается сам с собой
            if(A[j] == *konez[i])    //если элементы совпадают,значит есть повтор и
                ++k;            //включается счетчик k
        }
        if(k == 4)//если n == 1,это означает что элемент из массива-копии встретил сам себя
            // в массиве-оригинале,это повтором не является.А вот если n >= 2, то это уже
            kon++;  //повтор и счетчик m увеличивается на 1
        k = 0; //обнуляем счетчик n для нового шага цикла
    }
    std::cout << kon + nach<< " ";
    return 0;
}
