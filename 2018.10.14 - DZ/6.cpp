/*
Напишите функцию sort упорядывающую массив целых чисел и программу с примером её использования. 
В коде запрещается использовать обращения к массиву по индексу( Arr[i] ), т.е. нужно использовать указательную арифметику.
Эффективность в данной программе не приоритетна. Количество аргументов функции не должно превышать 2.
*/
#include <iostream>
using namespace std;
  int main() 
{
    int *arr; 
    int size;
    cout << "n = ";
    cin >> size;
    if (size <= 0) 
        cerr << "Invalid size" << endl;
        return 1;
    }
    arr = new int[size]; 
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr; 
    
    return 0;
}

#include <iostream>
using namespace std;
  void main();
{
    int *arr; 
    int size;
    cout << "n = ";
    cin >> size;
    if (size <= 0) 
        cerr << "Invalid size" << endl;
        return 1;
    }
    arr = new int[size]; 
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
{  void sort (int *arr, int size)
    for (int i = 0; i < size - 1; i++)
}
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete [] arr; 
    
    return 0;
}
