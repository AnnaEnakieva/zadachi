/*функция, переводящая матрицу в список ребер для неориентированного графа*/

#include<iostream>
#include<vector>
using namespace std;
int n, m;
int* matrix_listreber(int **matrix, int *nachalo, int *konez){
    int count = 1;
    for (int i = 1; i < m + 1; i++ )
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (matrix[i][j] == 1)
            {
                nachalo[count] = i;
                konez[count] = j;
                count++;
            }
            else count++;
        }
    }
    return nachalo;
    return konez;
}

int main ()
{
    cout << "введите количество ребер, а затем количество вершин";
    int n, m;
    cin  >> n >> m;// n-ребра, m - вершины
    // матрица смежности
    cout  << "введите матрицу";
    int** matrix = new int*[m];
    for (int i = 1; i < m+1; ++i)
    {
        matrix [i] = new int [m];
    }
    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < m + 1 ; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int *nachalo = new int[n*2];
    int *konez = new int[n*2];
    for (int i = 1; i < n + 1; i++)
        nachalo[i] = 0;
    for (int i = 1; i < n*2 + 1; i++)
        konez[i] = 0;
    matrix_listreber ( matrix, nachalo, konez);
    for (int i = 1; i < n*2 + 1; i++)
    {
        cout << nachalo[i]<< " " << konez[i] << endl;
    }
    return 0;
    
}
