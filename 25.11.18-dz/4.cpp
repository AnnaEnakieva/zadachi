/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/

#include <iostream>
using namespace std;
void function getSimpleNumbers(numbers)
{
    if (numbers < 1 || typeof numbers != 'number') {
        return 0;
    }
    numbers = Math.floor(numbers);
    
    var sn = 2;
    var simples = [1];
    var isItSimple = false;
    
    while (simples.length < numbers) {
        for (var i=2; i<sn/2; i++)
        {
            if (sn % i == 0)
 
                isItSimple = true;
                break;
        }
        
        if (isItSimple == true) {
            simples.push(sn);
        }
        
        isItSimple = true;
        sn++;
    }
    return simples;

}
int main ()
{
    int n;
    cin >> n;
    for (int i=0; i<n;i++)
    {
        function getSimpleNumbers(numbers);
    cout << numbers;
    }
    return 0;
}
