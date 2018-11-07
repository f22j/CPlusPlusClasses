#pragma once
#include <iostream>
using namespace std;

template<class T>
struct Element {

	T obj;
	Element<T> *next = *prev = nullptr;

};

template<class T>
class List{

	Element<T> *head = *tail = nullptr;
	int size = 0;

public:
	
	List(const List<T> &obj);
	List(List<T> &&obj);

	List<T> &operator=(const List<T> &obj);
	List<T> &operator=(List<T> &&obj);

	void push_back(const T &obj);
	void push_back(T &&obj);

	void push_front(const T &&obj);
	void push_front(T &&obj);

	void pop_back();
	void pop_front();

	bool empty() const;
	void clear();
	
	void insert(const T &obj);
	void insert(T &&obj);

	void erase(int pos);
	~List();
};

template<class T>
inline List<T>::List(const List<T>& obj){
}

template<class T>
inline List<T>::List(List<T>&& obj){
}

template<class T>
inline List<T>& List<T>::operator=(const List<T>& obj){
	// TODO: вставьте здесь оператор return
}

template<class T>
inline List<T>& List<T>::operator=(List<T>&& obj){
	// TODO: вставьте здесь оператор return
}

template<class T>
inline void List<T>::push_back(const T & obj){

	Element<T> *new_element = new Element<T>;
	new_element->obj = obj;

	if (head == nullptr) {

		head = tail = new_element;
		size = 1;

	}else {

		tail->next = new_element;
		new_element->prev = tail;
		tail = new_element;
		size++;

	}

}

template<class T>
inline void List<T>::push_back(T && obj){
}

template<class T>
inline void List<T>::push_front(const T && obj){
}

template<class T>
inline void List<T>::pop_back(){
}

template<class T>
inline void List<T>::pop_front(){
}

template<class T>
inline bool List<T>::empty() const{
	return false;
}

template<class T>
inline void List<T>::clear(){
}

template<class T>
inline void List<T>::insert(const T & obj){
}

template<class T>
inline void List<T>::insert(T && obj){
}