/*Напишите две функции(или метода):
- функция, заполняющую карту размера MxN минами с заданной вероятностью P. Картой можно считать двумерный массив. 
Миной можно считать значение “-1”
- функцию заполняющую карту значениями – количеством мин в соседних точках.*/

1)#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   
#include <iostream>
using namespace std;
int main ()
{
    int n, m;
    cin >> n >> m;
    int mina[102][102];
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= m + 1; j++)
            mina[i][j] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> mina[i][j];
    }
    int ans[102][102];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int dx[8] = {1, 1, 1, 0, 0, -1, -1, -1};
            int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
            int a = 0;
            for (int k = 0; k < 8; k++)
                a += mina[i + dy[k]][j + dx[k]];
            ans[i][j] = a;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mina[i][j] == 1)
                cout << "*";
             else
                cout << ans[i][j];
        }
        cout << endl;
    }
}
/* #include <iostream>
using namespace std;
int main ()
{
    int m,n;
    cin >> m >> n;
    int a[m][n];
    cout << RAND_MAX << endl; // константа, хранящая максимальный предел из интервала случайных чисел
    cout << rand() << endl;
    double p =1/RAND_MAX;
    long long  k;
    for (int i = 0; i < k; i++) { //перебор строк
        for (int j = 0; j < k; j++)
        { //перебор столбцов
            if (i == j) {
                a[i][j] = 1;
            } else if (i < j) {
                a[i][j] = 0;
            } else {
                a[i][j] = 2;
            }
        }
    }
    //вывод
    for (int i = 0; i < k; i++) { //перебор строк
        for (int j = 0; j < k; j++) { //вывод одной строки
            cout << a[i][j] << " ";
        }
        cout << endl; //перевод строки после того, как выведены все элементы
    }
}
