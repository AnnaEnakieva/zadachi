/*Напишите программу, вычисляющую сумму нечетных цифр целого числа./*

#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cin >> n;
    sum=0;
    while (n>0)
    {
        int k;
        k=n%10;
        if (k%2!=0)
        {
            sum = sum + k;
        }
        n=n/10;
    }
    cout << sum;
    return 0;
}
