/*Сверхпростым числом будем называть такое простое число, что его номер в последовательности простых чисел – тоже прост.
Напишите программу, находящую k-ое сверхпростое число.*/

#include <iostream>
#include <list>
    typedef std :: list<int> primes_list;
    typedef primes_list :: iterator primes_iterator;
    using namespace std;
       bool IsPrime(int n, primes_list primes)
    {

        if (n < 2)
            return false;
        bool retval = true;
        for (primes_iterator i = primes.begin();i != primes.end(); i++)
        {
            int prime = *i;
            if (n / prime < prime)
                break;
            
            if (n % prime == 0)
            {
                retval = false;
                break;
            }
        }
        
        return retval;
    }
        int GetSuperPrime (int k)
{
        cin >> k;
        if (k < 1)
            return 0;
        int primes_count = 0;
        int superprimes_count = 0;
        
        primes_list primes;
        
        for (int i = 2; ; i++)
        {
            if (IsPrime(i, primes))
            {
                primes.push_back(i);
                primes_count++;
                
                if (IsPrime(primes_count, primes))
                {
                    superprimes_count++;
                    
                    if (superprimes_count == k)
                        return i;
                }
            }
        }
    }
    
  int main()
    {
        int k;
        cin >> k;
        cout << GetSuperPrime( k ) << endl;
    }
