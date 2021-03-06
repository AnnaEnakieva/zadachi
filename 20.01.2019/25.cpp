/*25) На вход программы поступает последовательность из N целых положительных чисел, все числа 
в последовательности различны. Рассматриваются все пары различных элементов последовательности, находящихся 
на расстоянии не меньше чем 4 (разница в индексах элементов пары должна быть 4 или более, порядок элементов 
в паре неважен). Необходимо определить количество таких пар, для которых произведение элементов делится на 38. */

#include "pch.h"
#include <iostream>
    using namespace std;
    int main()
    {
        int n1 = 0, n2 = 0, n3 = 0, n4 = 0, s = 4, n, a_, cnt;
        cin >> n;
        cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a_;
            if (i >= s)
            {
                if (a_ % 38 == 0)
                    cnt += i - s + 1;
                else
                    cnt += n4;
            }
            n4 = n3;
            n3 = n2;
            n2 = n1;
            if (a_ % 38 == 0)
                n1 += 1;
        }
        cout << cnt;
        return 0;
    }
