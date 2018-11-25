/* Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k.
В комментариях напишите, почему перебор - эффективный */ 

#include "pch.h" 
#include <iostream> 
#include <ctime> 
using namespace std; 

int main() 
{ 
    int num; 
    int n = 1; 
    int product = 1; 
    cout « "Amount "; 
    cin » num; 
    cout « "Elements: "; 
    srand(time(NULL)); 
    int *arr = new int[num]; // Выделение памяти для массива 
    for (int i = 0; i < num; i++) 
        { 
            arr[i] = rand(); 
            cout « arr[i] « " "; 
        } 
    cout « endl; 


    int k; 
    cout « "k = "; 
    cin » k; 

    for (int i = 0; i < num; i++)
        { 
            int number1 = arr[i]; 
            int promez2 = arr[i]; 
            product = 1; 
            while (number1 > 0) 
        { 
    number1 = number1 / 10; 
    int promez = promez2 % 10; // разделяем число по разрядам 
    product = product * promez; // перемножаем разряды между собой 
    promez2 = promez2 / 10; 
    } 



    if (product > k) // сравниваем произведение с заданным числом 
    cout « endl « "Number: " « arr[i]; 
  } 

    delete[] arr; // очистка памяти 



    return 0;
}
