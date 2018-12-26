/*Напишите программу, находящую разложение целого числа в сумму точных квадратов, так чтобы количество слагаемых было
минимальным.*/
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
int num;
cin>>num;
int big;
for(i=0;i<num;i++)
{
	if (num==0)
	break;
	big=sqrt(num);
	num=num-big*big;
	cout<<big<<"  ";
}

}
