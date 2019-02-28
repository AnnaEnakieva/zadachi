/*Реализуйте класс double_stack -  стек вещественных чисел переменного размера. Класс должен содержать конструктор, деструктор,
методы push,pop*/

#include <iostream>
#include <stack>
using namespace std;
template <typename T>
class double_stack
    {
        private :
        struct Node
        {
            int data;
            Node* next = NULL;
            //Node* prev = NULL;
        };
        Node head; // указатель на стек
    public:
       double_stack(): 
        {
            head = NULL;
        }// заполнение
        ~double_stack() // деструктор
        {
            while (head != 0)
            {
                Node* temp = head;
                head = head -> next;
                delete temp;
            }
        }
        void push (int x)
        {
            Node* temp = new Node;
            temp -> data = x;
            temp -> next = head;
            head  =  temp;
        }
        int pop ()
        {
            if (head == NULL)
            {
                cout << "Stachis empty";
                return 0;
            }
            Node* temp = head;
            head = head -> next;
            int x = temp -> data;
            delete temp;
            return x;
        }
    };

int main ()
{
return 0;
}
