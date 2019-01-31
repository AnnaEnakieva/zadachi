/*Реализуйте класс dou/*Реализуйте класс double_vector -  массив вещественных чисел переменного размера.*/

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
class double_vector
{
    double *data;                       //  Вектор
    int size; //  Размерность вектора
    int capacity;
public:
    double_vector ()
    {
        data =  new double [1];         //конструктор без аргументов
        data[0] = 0;
    }
    double_vector (unsigned int n)
    {
        size = n;
        data =  new double [size];
        for ( int i = 0; i < size; i++ )    // конструктор с аргументами заданной длинны
            data[i] = 0;
    }
    ~ double_vector ()
    {
        delete [] data;                     //деструктор
    }
    double_vector(const double_vector& A)
    {                                           //  Конструктор копирования
        size = A.size;
        data = new double[size];
        for(int i = 0; i < size; i++)
            data[i] = A.data[i];
    }
    const double_vector& operator=(const double_vector& A)
    {                                   //  Перегруженный оператор присваивания
        if(&A == this)                  //  Проверка на присваивание объекта
            return *this;               //  самому себе
        
        //  Если передан другой объект, то копируем его
        delete [] data;
        size = A.size;
        data = new double[size];
        for(int i = 0; i < size; i++)
            data[i] = A.data[i];
        return *this;
    }
    double operator[] (unsigned int n)
    {
        
        //  для проверки выхода за границы массива
        if(n < 0)                       //  В случае если индекс меньше нуля,
            //  то возвращаем нулевой элемент массива
        {
            return data[0];
        }
        else if(n > size - 1)
            
        {
            cout << "Index of array too big:\tuse last element\n";
            return data[size - 1];
        }
        else
            return data[n];     //  Возврат заданного элемента массива
        
    }
    void push_back(double x)            //добавение в конец
    {
        if (size >= capacity)
        {
            capacity *= 2;
            double *temp = new double [capacity];
            for (int i = 0; i < size; i++)
                temp [i] = data[i];
            delete []data;
            data = temp;
        }
        data[size] = x;
        size++;
    }
    unsigned int Size()
    {                               //  Функция, возвращающая размерность вектора
        return size;
    }
    unsigned int Capacity()                 //получение вместимости вектора
    {
        return capacity;
    }
    void pop_back(double x)    
    {//извлечение из конца:
    //при извлечении - элемент удаляется из вектора, а значение этого элемента возвращается,
    //как результат работы метода
        double x = data [size - 1];
        delete (data + size - 1);
        size--;
        return x;
    }
void resize (unsigned int n)
{
    capacity += n;
    double* T = new double[capacity];
    for (int i = 0; i < size; i++)
        T[i] = data [i];
    delete [] data;
    data = T;
}
void push_front (double x)
{
    if (size >= capacity)
    {
        capacity *= 2;
        double* T = new double[capacity];
        for (int i = 1; i < size + 1; i++)
            T[i] = data [i];
        delete [] data;
        data = T;
    }
    else
    {
        double* T = new double[capacity];
        for (int i = 1; i < size + 1; i++)
            T[i] = data [i];
        delete [] data;
        data = T;
    };
    size++;
}
int pop_front ()
{
    double T = data [0];
    delete (data + 0);
    size--;
    return T;
}
void insert (double x, int k)
{
    if (size >= capacity)
    {
        capacity *= 2;
        double* T = new double[capacity];
        for (int i = 1; i < k; i++)
            T[i] = data [i];
        for (int i = k+1; i < size; i++)
            T[i] = data [i-1];
        delete [] data;
        data = T;
    }
    data[k] = x;
}
void erase (int k)
{
    delete (data +k);
    size--;
}
void erase (int a, int b)
{
    if (a > b)
    {
        int T = b;
        b = a;
        a = T;
    }
    int length = b - a;
    for (int i = 1; i <= b; i++)
        delete (data+i);
    size -= length;
}
const double_vector& operator+(const double_vector& A) 
{
		double* temp = new double[capacity];
		for (int i = 0; i < size * 2; i++) {
			if (i <= size)
				temp[i] = data[i];
			else
				temp[i] = A[i];
		}
		delete[] data;
		data = temp;
	}

};
int main()
{
    return 0;
}
