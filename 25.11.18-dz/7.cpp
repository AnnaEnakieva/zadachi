/*Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами.*/
#include "pch.h"
#include <iostream>
using namespace std;

int reverse_number(int number) // функция для палидромов
{
    int n = 0;
    while (number)
    {
        n = 10 * n + number % 10;
        number /= 10;
    }
    
    return n;
}


int main()

{
    int m = 1, n, l = 0, firstNumber = 0, lastNumber = 0, product = 1;
    cout << "Amount ";
    cin>> n;
    cout<< endl;
    
    for (int number = 1; l < n; number++) { // ищем первое число нужной длины
        int l = 0;
        m = number;
        while (m > 0) {
            m = m / 10;
            if (m != 0) {
                l++;
            }
        }
        l++;
        if (l == n) {
            firstNumber = number;
            cout<< endl<< "first number " << firstNumber << " ";
            break;
        }
    }
    
    
    for (int number = firstNumber; l < n; number++) { // ищем последнее число нужной длины
        int l = 0;
        m = number;
        while (m > 0) {
            m = m / 10;
            if (m != 0) {
                l++;
            }
        }
        l++;
        if (l > n) {
            lastNumber = number - 1;
            cout << endl<< "last number " << lastNumber << endl;
            break;
        }
    }
