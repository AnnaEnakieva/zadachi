/*Реализуйте класс char_deque -  дек символов чисел переменного размера. Класс должен содержать конструктор, деструктор, 
методы push_front, push_back,pop_front, pop_back*/

#include <iostream>
#include <stack>
using namespace std;
template <typename T>
class char_deque
{
    private :
    struct Node
    {
        Node* next = NULL;
        string data;
    };
    Node *head;
    Node* tail;
    public:
       void push_front (int x)
        {
           if (head == NULL)
            {
                head = new Node;
                tail = head;
                head -> data = x;
                return;
            }
            head -> prev = new Node;
            head -> prev -> next = head;
            head = head -> prev;
            head -> data = x;
        };
        void push_back (int x)
    {
        if (head == NULL)
        {
            tail = new Node;
            head = tail;
            tail -> data = x;
            return;
        }
        tail -> next = new Node;
        tail -> next -> prev = head;
        tail = tail -> next;
        tail -> data = x;
    };
};

int main ()
{
    return 0;
}
