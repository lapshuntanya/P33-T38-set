#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T info;
	Node* left;
	Node* right;

	Node(T value) { info = value; left = right = nullptr; }
	void showNode() {
		cout << "INFO: " << info << endl;
		cout << "\t Left: " << left << " Right: " << right << endl;
	}
};

//-------------------------------------------------

template <typename U>
class BinTree {
	Node<U>* root; //Вказівник на перший вузол у дереві
public:
	BinTree() { root = nullptr; }
	~BinTree() {}

	void insert(U value) {
		Node<U>* el = new Node<U>(value);

		if (root == nullptr)//Якщо дерево пусте
			root = el;
		else {//Якщо в дереві є вузли
			//Пошук місця для вставки
			Node<U>* p = root;
			while (p != nullptr) {
				if (value < p->info)
					p = p->left;
				else
					p = p->right;
			}


		}
	}

	Node<U>* search(U value) {
		//Повернути адресу вузла зі значенням value
		//Якщо value немає в дереві, то повернути nullptr		
	}

	//Повний обхід дерева
	void showTree() {
		if (root == nullptr)
			cout << "Дерево контейнерів порожнє!" << endl;
		else {
			// . . .	
		}
	}

};

