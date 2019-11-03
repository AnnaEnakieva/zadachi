#include <iostream>
using namespace std;
    int n; // кол-во вершин
    int m; // кол-во ребер
    
    int* findHamiltonianCycle(int** array1, int* circle)
    {
        cout << "заполните очередь";
        for (int i = 0; i < n; i++)
            circle[i] = i;
        int start = 0;
        int end = n;
        for (int i = 0; i <= n * (n-1); i++)
        {
            if (array1[start][start + 1] == 1)
            {
                end = start;
                start++;
            }
            else
            {
                int i=2;
                while (array1[start][i] != 1 && array1[start+1][i+1])
                    i++;
                for (int j=0; j<((i-start-1)/2); j++)
                {
                    swap(circle[start+1+j], circle[i-j]);
                }
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << circle[i] << " ";
        }
        
        return circle;
    };
    
    int main()
    {
        cout << "введите вершины" << endl;
        cin >> n;
        cout << "введите ребра" << endl;
        cin >> m;
        int **vershina = new int*[n];
        for (int i=0; i<n; i++)
            vershina[i] = new int[n];
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cin >> vershina[i][j];
            }
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                cout << vershina[i][j];
            }
        }
        int **circle = new int*[n];
        for (int i=0; i<n; i++)
            circle[i] = new int[n];
        findHamiltonianCycle(vershina, *circle);
        return 0;
    }
