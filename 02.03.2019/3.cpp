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
        Node* prev = NULL;
        string data;
        int count;
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
    bool isEmpty()
    {
        return count == 0 ? true : false;
    }
    string pop_front()
    {
      
        
        // Data in the front node
        string ret = head->data;
        // Delete the front node and fix the links
        Node* tmp = head;
        if (head->next != NULL)
        {
            head = head->next;
            head->prev = NULL;
        }
        else
        {
            head = NULL;
        }
        count--;
        delete tmp;
        
        return ret;
    }
    string pop_backk()
    {

        // Data in the rear node
        string ret = tail->data;
        
        // Delete the front node and fix the links
        Node* tmp = tail;
        if (tail->prev != NULL)
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        else
        {
            tail = NULL;
        }
        count--;
        delete tmp;
        
        return ret;
    }
};


int main ()
{
    return 0;
}
