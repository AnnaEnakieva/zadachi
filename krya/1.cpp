1. поиск гамильтонова цикла по оре
#include <iostream>
using namespace std;
int main() {
    int m = 0;//количество ребер индентных данной вершине
    int n;// количество вершин
    int k=0;// счетчик
    cout << "введите количество вершин";
    cin >> n;
    int *a= new int[n];//массив для хранения степени вершины
    int** Mas = new int *[n];//матрица смежности
    for (int i = 1; i < n + 1; i++)
        Mas[i] = new int [n+1];
    cout << "введите матрицу смежности";
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> Mas[i][j];
        }
    }
    for (int i = 1; i < n + 1; ++i ){
        for (int j = 1; j < n + 1; j++)
        {
            if (Mas[i][j] == 1){//если данная вершина индентна другой, то увеличиваем значение м. полученные данные записываем в массив аб обнуляем счетчик
                m++;
                cout << "вывод m"<< endl;
                cout << m << " ";
            }

        }
        a[i]= m;
       //cout << "вывод массива a[n]"<< endl;
        //cout << a[i] << " ";
      m = 0;
    }
    cout << "вывод массива a[n]"<< endl;
    for (int i = 0; i< n; i++){
        cout << a[i] << " ";
    }
    for (int i=1; i < n+1; i++)// проходимся по массиву, сравнивая сумму любых вевершин с 3 по теореме оре. если выполняется, то k=1, если нет, то 0
    {
        if (a[i] + a[i+1] >= 3)//работает не для любых вершин
            k=1;
        else  k=0;
         cout << "вывод k"<< endl;
        cout << k << " "<< endl;
    }
    if (k == 1)
    cout << "гамильтонов цикл найден"<< endl;
     else cout << "цикл не найден" << endl;
    /*for (int i = 0; i < n; i++)
        delete[] Mas[i];
    delete [] Mas;*/
    return 0;
}

