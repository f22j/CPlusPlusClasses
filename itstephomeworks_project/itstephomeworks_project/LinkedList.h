#pragma once
#include <iostream>
using namespace std;

template<typename T>
struct Element{
	T obj;
	Element<T> *next;
};

template<class T>
class LinkedList {

	Element<T> *head;
	int size;

public:
	LinkedList();

	void push_front(const T &elem);
	void push_back(const T &elem);

	void insert(int pos, const T &elem);
	void insert(int pos, T &&elem);
	void erase(int pos);

	void pop_front();
	void pop_back();

	bool empty() const;
	int getSize() const;

	T& front();
	const T& front()const;

	T& back();
	const T& back()const;

	void clear();
	void operator+=(const T&obj);
	
	void reverse();
	void print() const;

	~LinkedList();
};

template<typename T>
ostream & operator<<(ostream &os, const LinkedList<T> &lst);


template<typename T>
LinkedList<T>::LinkedList() {

	this->head = nullptr;
	this->size = 0;

}

template<typename T>
void LinkedList<T>::push_back(const T & elem) {
	
	Element<T> *new_elem = new Element<T>;
	new_elem->obj = elem;
	new_elem->next = nullptr;

	if (this->head != nullptr) {	 

		Element<T> *tmp = this->head;
		while (tmp->next != nullptr) 
			tmp = tmp->next;

		tmp->next = new_elem;

	}else
		this->head = new_elem;

	this->size++;
}

template<typename T>
void LinkedList<T>::insert(int pos, const T & elem) {

	if (pos < 0 || pos > this->size)
		return;

	else if (pos == 0)
		this->push_front(elem);

	else if (pos == this->size)
		this->push_back(elem);

	else {

		Element<T> *tmp;
		for (size_t i = 0; i < pos - 1; i++)
			tmp = tmp->next;

		Element<T> *new_elem = new Element<T>;

		new_elem->obj = elem;
		new_elem->next = nullptr;

		tmp->next = new_elem;
		this->size++;

	}

}

template<typename T>
void LinkedList<T>::insert(int pos, T && elem) {

	if (pos < 0 || pos > this->size)
		return;

	else if (pos == 0)
		this->push_front(elem);

	else if (pos == this->size)
		this->push_back(elem);

	else {

		Element<T> *tmp;
		for (size_t i = 0; i < pos - 1; i++)
			tmp = tmp->next;

		Element<T> *new_elem = new Element<T>;

		new_elem->obj = elem;
		new_elem->next = nullptr;

		tmp->next = new_elem;
		this->size++;
		elem = nullptr;

	}

}

template<typename T>
void LinkedList<T>::erase(int pos) {

	if (pos < 0 || pos > this->size)
		throw exception("List index out of range");

	else if (pos == 0)
		this->pop_front();

	else if (pos == this->size - 1)
		this->pop_back();

	else {

		for (size_t i = 0; i < pos - 1; i++)
			tmp = tmp->next;

		tmp->next = tmp->next->next;
		delete tmp;
		this->size--;

	}

}

template<typename T>
void LinkedList<T>::pop_front() {

	if (!this->head)
		return;

	Element<T> *tmp = this->head;
	this->head = this->head->next;

	size--;
	delete tmp;

}

template<typename T>
void LinkedList<T>::pop_back() {

	T *tmp = this->head;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	delete tmp;
	this->size--;

}

template<class T>
inline bool LinkedList<T>::empty() const{
	return this->head == nullptr;
}

template<class T>
inline int LinkedList<T>::getSize() const{
	return this->size;
}

template<class T>
inline T & LinkedList<T>::front(){
	return this->head;
}

template<class T>
inline const T & LinkedList<T>::front() const{
	return this->head;
}

template<class T>
inline T & LinkedList<T>::back(){
	
	Element<T> *tmp = this->head;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	return tmp;
}

template<class T>
inline const T & LinkedList<T>::back() const{
	Element<T> *tmp = this->head;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	return tmp;
}

template<class T>
inline void LinkedList<T>::clear(){
	this->~LinkedList();
}

template<class T>
inline void LinkedList<T>::operator+=(const T & obj){
	this->push_back(obj);
}


template<class T>
inline void LinkedList<T>::reverse() {

	Element<T> *last_element = this->head;
	Element<T> *first_element = this->head;
	int iter = 0;

	while(last_element != nullptr || first_element != nullptr){

		for (size_t i = 0; i < this->size - iter; i++)
			last_element = last_element->next;

		for (size_t i = 0; i < iter; i++)
			first_element = first_element->next;

		Element<T> *tmp = first_element;
		first_element = last_element;
		last_element = tmp;
		iter++;

	}

}

template<class T>
inline void LinkedList<T>::print() const{

	Element<T> *tmp = this->head;

	while (tmp->next != nullptr) {

		try {
			cout << tmp->obj << " ";
		}catch (int i) {
			cout << "Cant print element:(\n";
		}

		tmp = tmp->next;

	}

}

template<typename T>
void LinkedList<T>::push_front(const T & elem) {

	this->size++;
	Element<T> *tmp = new Element<T>;

	tmp->obj = elem;
	tmp->next = this->head;

	this->head = tmp;

}

template<typename T>
ostream & operator<<(ostream & os, const LinkedList<T>& lst) {

	lst.print();
	return os;

}

template<class T>
inline LinkedList<T>::~LinkedList(){

	Element<T> *tmp = this->head;

	while (tmp->next != nullptr) {

		tmp = tmp->next;
		this->pop_front();

	}

}