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
       void push_front (int x)//добавление в начало
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
        void push_back (int x) // добавление в конец
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
    void pop_front () // удаление в начале
        {
              if (head == NULL)
            {
                cout << "Stachis empty"
                    return 0;
            }
        int x = front -> data;
        Node* temp = front;
        if ( front -> next != NULL )
        {
            front = front -> next;
            front -> prev = NULL;
        }
        else
        {
            front = NULL;
        }
        count--;
        delete temp;

        return x;
    }
        };
    void pop_back ()//удаление в конце
        {
           if (head == NULL)
            {
                cout << "Stachis empty"
                    return 0;
            }
          int x = rear -> data;

        // Delete the front node and fix the links
        Node* temp = rear;
        if ( rear->prev != NULL )
        {
            rear = rear->prev;
            rear->next = NULL;
        }
        else
        {
            rear = NULL;
        }
        count--;
        delete temp;

        return x;
    }
        };
};


int main ()
{
    return 0;
}
