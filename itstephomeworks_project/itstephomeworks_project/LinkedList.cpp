#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList(){

	this->head = nullptr;
	this->size = 0;

}

template<class T>
void LinkedList<T>::push_back(const T & elem){
	T *tmp = this->head;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	Element<T> *tmp_elem = new Element<T>;
	tmp_elem->obj = elem;
	tmp_elem->next = nullptr;

	tmp->next = tmp_elem;
	this->size++;

}

template<class T>
void LinkedList<T>::insert(int pos, const T & elem){

	if (pos < 0 || pos > this->size)
		return;

	else if (pos == 0)
		this->push_front(elem);

	else if (pos == this->size)
		this->push_back(elem);

	else{

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

template<class T>
void LinkedList<T>::erase(int pos){
}

template<class T>
void LinkedList<T>::pop_front(){

	if (!this->head)
		return;

	Element<T> *tmp = this->head;
	this->head = this->head->next;

	size--;
	delete tmp;

}

template<class T>
void LinkedList<T>::pop_back(){

	T *tmp = this->head;

	while (tmp->next != nullptr)
		tmp = tmp->next;

	delete tmp;
	this->size--;

}

template<class T>
void LinkedList<T>::push_front(const T & elem){

	this->size++;
	Element<T> *tmp = new Element<T>;

	tmp->obj = elem;
	tmp->next = this->head;

	this->head = tmp;

}

template<typename T>
ostream & operator<<(ostream & os, const LinkedList<T>& lst) {
	
	T *tmp = lst->head;

	while (tmp->next != nullptr) {

		cout << tmp->obj << " ";
		tmp = tmp->next;

	}

	return os;
}