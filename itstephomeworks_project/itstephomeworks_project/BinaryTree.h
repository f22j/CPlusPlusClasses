#pragma once
#include <iostream>
using namespace std;

template<class T, class T2>
struct Node {

	T key;
	T2 obj;

	Node<T, T2> *parent = nullptr;
	Node<T, T2> *left = nullptr;
	Node<T, T2> *right = nullptr;

};

template<class T, class T2>
class BinaryTree{

	Node<T, T2> *root = nullptr;
	int size = 0;

public:
	BinaryTree() = default;
	BinaryTree(const T &key, const BinaryTree<T, T2> &obj);

	BinaryTree(const BinaryTree<T, T2> &copy_tree);
	BinaryTree(BinaryTree<T, T2> &&copy_tree);
	BinaryTree<T, T2> &operator=(const BinaryTree<T, T2> &copy_tree);

	bool empty() const;
	int getSize() const;

	T2 & operator[](T &key);
	const T2 & operator[](T &key) const;

	void print() const;
	void printNode(Node<T, T2> *obj) const;

	void find(const T & key) const;
	void addTree(Node<T, T2>* nd);

	void clear();
	void swap(T &key1, T key2);

	void deleteNode(Node<T, T2> *nd);
	void erase(T &key);

	void insert(T &key, T2 & obj);
	void insert(T && key, T2 && obj);

	void remove(Node<T, T2> *nd);
	~BinaryTree();
};

template<class T, class T2>
inline BinaryTree<T, T2>::BinaryTree(const T &key, const BinaryTree<T, T2> &obj){

	this->root = new Node<T, T2>;

	this->root->parent = nullptr;
	this->root->left = nullptr;
	this->root->right = nullptr;

	this->root->obj = obj;
	this->root->key = key;
	this->size++;

}

template<class T, class T2>
inline BinaryTree<T, T2>::BinaryTree(const BinaryTree<T, T2>& copy_tree){
	this->addTree(copy_tree.root);
}

template<class T, class T2>
inline BinaryTree<T, T2>::BinaryTree(BinaryTree && copy_tree){

	this->root = copy_tree->root;
	this->size = copy_tree->size;

	copy_tree->root = nullptr;
	copy_tree->size = 0;

}

template<class T, class T2>
inline BinaryTree<T, T2>& BinaryTree<T, T2>::operator=(const BinaryTree<T, T2>& copy_tree){

	if (&copy_tree == this)
		return *this;

	this->~BinaryTree();
	this->addTree(copy_tree.root);

	return *this;
}

template<class T, class T2>
inline bool BinaryTree<T, T2>::empty() const{
	return this->root == nullptr;
}

template<class T, class T2>
inline int BinaryTree<T, T2>::getSize() const{
	return this->size;
}

template<class T, class T2>
inline T2 & BinaryTree<T, T2>::operator[](T & key){
	
	Node<T, T2> *tmp = this->root;

	while (tmp->key != key) {

		if (tmp->key < key)
			tmp = tmp->left;
		else
			tmp = tmp->right;

	}

	return tmp;
}

template<class T, class T2>
inline const T2 & BinaryTree<T, T2>::operator[](T & key) const{

	Node<T, T2> *tmp = this->root;

	while (tmp->key != key) {

		if (tmp->key < key)
			tmp = tmp->left;
		else
			tmp = tmp->right;

	}

	return tmp;
}

template<class T, class T2>
inline void BinaryTree<T, T2>::find(const T & key) const {

	Node<T, T2> *node = this->root;

	while (tmp != nullptr) {

		if (tmp->key == key)
			return tmp->obj;
		else if (tmp->key > key)
			tmp = tmp->left;
		else
			tmp = tmp->right;

	}

	throw exception("Cant find element");
}

template<class T, class T2>
inline void BinaryTree<T, T2>::addTree(Node<T, T2>* nd){

	if (nd != nullptr) {

		addTree(nd->left);
		addTree(nd->right);
		this->insert(nd->key, nd->obj);

	}

}

template<class T, class T2>
inline void BinaryTree<T, T2>::remove(Node<T, T2>* nd){

	if (nd != nullptr) {

		this->remove(nd->left);
		this->remove(nd->right);

		delete nd;
		this->size--;

	}

}

template<class T, class T2>
inline void BinaryTree<T, T2>::print() const{
	this->printNode(this->root);
}

template<class T, class T2>
inline void BinaryTree<T, T2>::printNode(Node<T, T2>* nd) const{

	if (nd != nullptr) {

		printNode(nd->left);

		try {
			cout << nd->key << " " << nd->obj << endl;
		}catch (int i) {
			cout << "This type of element cant be printed!" << endl;
		}

		printNode(nd->right);

	}

}

template<class T, class T2>
inline void BinaryTree<T, T2>::clear(){
	this->~BinaryTree();
}

template<class T, class T2>
inline void BinaryTree<T, T2>::swap(T & key1, T key2){
}

template<class T, class T2>
inline void BinaryTree<T, T2>::deleteNode(Node<T, T2> *nd){

	if (nd == nullptr)
		return;

	

}

template<class T, class T2>
inline void BinaryTree<T, T2>::erase(T & key){

	while

}

template<class T, class T2>
inline void BinaryTree<T, T2>::insert(T & key, T2 & obj){

	Node<T, T2> *newNode = new Node<T, T2>;

	newNode->key = key;
	newNode->obj = obj;

	if (this->root == nullptr) {

		this->root = newNode;
		size = 1;
		return;

	}

	Node<T, T2> *tmp = this->head, *parent = nullptr;

	while (tmp != nullptr) {

		parent = tmp;
		if (key < tmp->key)
			tmp = tmp->left;
		else
			tmp = tmp->right;

	}

	newNode->parent = parent;
	if (parent->key < key)
		parent->left = newNode;
	else
		parent->right = newNode;

	this->size++;
}

template<class T, class T2>
inline void BinaryTree<T, T2>::insert(T && key, T2 && obj) {

	Node<T, T2> *newNode = new Node<T, T2>;

	newNode->key = key;
	newNode->obj = obj;

	if (this->root == nullptr) {

		this->root = newNode;
		size = 1;
		return;

	}

	Node<T, T2> *tmp = this->root, *parent = nullptr;

	while (tmp != nullptr) {

		parent = tmp;
		if (key < tmp->key)
			tmp = tmp->left;
		else
			tmp = tmp->right;

	}

	newNode->parent = parent;
	if (key < parent->key)
		parent->left = newNode;
	else
		parent->right = newNode;

}

template<class T, class T2>
inline BinaryTree<T, T2>::~BinaryTree(){
	this->remove(this->root);
}