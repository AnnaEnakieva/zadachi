/*Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами. В комментариях напишите, почему перебор - 
эффективный*/

#include <iostream>
usingnamespacestd;
int main ()
{
    int n,i,j,k;
    string s, a;
    cin >> n;
    for (int i=1; i<n; i++)
    {
        Label1->Caption=Str(i);
 
        s= Str[i];
        k=1;
        if (i<10)
            k=1;
        else if ((string(s) % 2==0)||(string(s)%2==1));
        {
            for (int j=1; j< string(s)/2;j++)
            {
                if (s[j]!=s[string(s)-(j-1)])
                    k=0;
            }
        }
    }
    
    if (k==1)
        cout << i;
}
 

