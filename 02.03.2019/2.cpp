/*Реализуйте класс string_queue -  очередь строк. Класс должен содержать конструктор, деструктор, методы push,pop.*/

#include <iostream>
#include <stack>
using namespace std;
template <typename T>
class string_queue
{
    private :
    struct Node
    {
        Node* next = NULL;
        string data;
    };
    Node *head;
    public:
    /*void push (int x)
    {
      //  data = new string_queue<string>();
    Node* temp = new Node;
    temp -> data = x;
    temp -> next = head;
    head  =  temp;

    };*/
    ~string_queue()
    {
        while (head !=NULL)
        {
            Node* temp = head;
            head = head -> next;
            delete temp;
        }
    };

        int pop ()
        {
           if (head == NULL)
            {
                cout << "очередь пуста";
                return 0;
            }
            Node* temp = head;
            head = head -> next;
            int x = temp -> data;
            delete temp;
            return x;
        };
        void push (int x)
        {
            if (head == NULL)
            {
                head = new Node;
            head -> data = x;
            return;
            }

            Node* temp = head;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp -> next = new Node;
            temp -> next -> data = x;//записать в данные x
        };
};

int main ()
{
    return 0;
}
