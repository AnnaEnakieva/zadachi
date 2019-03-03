/*Реализуйте класс int_list - односвязный список.  Класс должен содержать конструктор, конструктор копий,  деструктор, оператор присвоения, 
оператор [ ] - обращение по индексу, вставку по индексу, удаление по индексу.
*/

#include "pch.h"
#include <iostream>

struct Elem {
	int Data;
	Elem*next;
	Elem*prev;
};

template<typename T>
class List
{
public:
	List();
	~List();
	void pop_front();
	void clear();
	T& operator[](const int index);
	void insert(T data, int index);
	void removeAt(int index);
	void copy(const List& L);
private:
	template<typename T>
	class Node
	{
	public:
		Node * pNext;
		T data;

		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	int Size;
	Node<T> *head;
	Node<T> *tail;
};


template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}


template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;

	head = head->pNext;

	delete temp;

	Size--;

}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}


template<typename T>
T & List<T>::operator[](const int index)
{
	int counter = 0;

	Node<T> *current = this->head;

	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
void List<T>::insert(T data, int index)
{

	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node<T> *previous = this->head;

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T> *newNode = new Node<T>(data, previous->pNext);

		previous->pNext = newNode;

		Size++;
	}
}

template<typename T>
void List<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node<T> *previous = this->head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}


		Node<T> *toDelete = previous->pNext;

		previous->pNext = toDelete->pNext;

		delete toDelete;

		Size--;
	}
}

template<typename T>
void List<T>::copy(const List&L) {
	head = tail = NULL;
	int Count = 0;
	Elem*temp = L.Head;
	while (temp != 0) {
		AddTail(temp->data);
		temp = temp->next;
	}
}


int main()
{
	return 0;
}
