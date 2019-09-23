/*функция, переводящая матрицу в список ребер*/

#include<iostream>
using namespace std;
void** matrix_listreber(int N, int M, int **matrix)
{
    int *nachalo= new int[N * 2];
    int *konez= new int[N * 2];
    for (int i = 0; i < M; i++ )
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j] == 1)
            {
                for ( int k = 0; k < N * 2; k++)
                {
                    nachalo[k] = i;
                }
                for ( int h = 0; h < N * 2; h++)
                {
                    nachalo[h] = j;
                }
            }
        }
    }
    for (int i = 0; i < N * 2; i++ ){
        cout << nachalo[i] << " " << konez[i] << endl;
    }
   /* delete []nachalo;
    delete []konez;*/
}


int main ()
{
    
    cout << "введите количество ребер, а затем количество вершин";
    int n, m;
    cin  >> n >> m;// n-ребра, m - вершины
     // матрица смежности
    int matrix[m][m];
    cout  << "введите матрицу";
    for (int i = 0; i < m; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            cout  << matrix[i][j] << " ";
        }
        cout << endl;
    }
    matrix_listreber ( n, m, matrix);
  }
