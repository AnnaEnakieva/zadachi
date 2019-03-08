#/*Реализуйте класс int_linked_list - двусвязный список. Класс должен содержать конструктор, конструктор копий,  деструктор,
оператор присвоения, оператор [ ] - обращение по индексу, вставку по индексу, удаление по индексу.*/



#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next = NULL;
    Node* prev = NULL;
    
};
class int_linked_list {
    Node* head;
    Node* tail;
    int count;
public:
    int_linked_list() // конструктор
    {
        head = NULL;
    }
    ~int_linked_list() //деструктор
    {
        while (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void push(int x)
     {
     Node* temp = new Node;
     temp->data = x;
     if (head == NULL)
     {
     head = temp;
     }
     else
     {
     temp->next = head;
     head->prev = temp;
     head = temp;
     }
     }
    void AddTail(int n)//функция для копирования
    {
        Node * temp = new Node;
        temp -> next = 0;
        temp -> data = n;
        temp -> prev = tail;
        if(tail != 0)
            tail -> next = temp;
        if(count == 0)
            head = tail = temp;
        else
            tail = temp;
        count++;
    }
    int_linked_list(const int_linked_list & L)//конструктор копирования
    {
        head = tail = NULL;
        count = 0;
        Node* temp = L.head;
        // Пока не конец списка
        while( temp != 0)
        {
            AddTail(temp -> data);
            temp = temp -> next;
        }
    }
    void show() // указатель по индексу
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    int operator[](int j) // обращение по индексу
    {
        Node* temp = head;
        int i = 0;
        while (i != j)
        {
            temp = temp->next;
            i++;
        }
        return temp->data;
    }
    void operator=(int_linked_list ar) //оператор присвоения
    {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        Node* temp = ar.head;
        while (temp != NULL)
        {
            this -> push(temp->data);
            temp = temp->next;
        }
    }
    void push_index(int x, int j) // вставка по индексу
    {
        int i = 0;
        Node* temp = new Node;
        temp -> data = x;
        Node* temp = head;
        while (i != j)
        {
            temp = temp->next;
            i++;
        }
        temp -> next = temp->next;
        temp -> prev = temp;
        temp -> next->prev = temp;
        temp -> next = temp;
    }
    void del(int j) // удаление по индексу
    {
        int i = 0;
        Node* temp = head;
        while (i != j)
        {
            temp = temp->next;
            i++;
        }
        Node* temp = temp->next;
        temp -> prev = temp;
        temp -> next = temp -> next -> next;
        delete temp;
    }
    
};
