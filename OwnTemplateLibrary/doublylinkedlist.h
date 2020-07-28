//Author: Prasenjit Hiwale
//Date: 07/26/2020

//CRUD DoublyLinkedList


/*
This library is all about singly linked list. Here you can find following functions;
	1. Insert a new node in doublylinkedlist.
	2. Search a node.
	3. Insert a new node at random position.
	4. Find the length of the linkedlist.
	5. Delete a random node.
	6. Update a random node.
*/


#pragma once

#ifndef _DOUBLYLINKEDLIST_H
#define _DOUBLYLINKEDLIST_H

#include<iostream>

namespace own {

	class Node {
	public:
		int data;
		Node* next;
		Node* prev;
		Node(int d) : data{ d }, next{ nullptr }, prev{ nullptr } {}
	};

	class DLL {
	public:

		//Insert a new Node in Doubly Linked List.
		static void insert(Node* &head, int data) {
			Node* newNode = new Node(data);
			if (head == nullptr) {
				head = newNode;
			}
			else {
				Node* curr = head;
				while (curr->next != nullptr) {
					curr = curr->next;
				}
				newNode->prev = curr;
				curr->next = newNode;
			}
		}

		//Print all nodes from doubly linked list.
		static void dll_print(Node* head) {
			Node* curr = head;
			while (curr) {
				if (curr->next == nullptr && curr->prev == nullptr) {
					std::cout << "current: " << curr->data << std::endl;
				}
				else {
					std::cout << " current: " << curr->data << std::endl;
					/*
					if (curr->prev != nullptr) {
						std::cout << "Prev of "<<curr->data << " is " << curr->prev->data << std::endl;
					}
					else {
						std::cout << "Prev not available" << std::endl;
					}*/
				}
				curr = curr->next;
			}
		}

		//Insert a new node at any location in doubly linked list.
		static void insert_at(Node* &head, int after, int data) {
			Node* curr = head;
			Node* newNode = new Node(data);
			while (curr) {
				if (head == nullptr) {
					return;
				}
				else if (curr->data == after) {
					if (curr->next != nullptr) {
						newNode->prev = curr;
						newNode->next = curr->next;
						curr->next->prev = newNode;
						curr->next = newNode;
						return;
					}
					else if (curr->next == nullptr) {
						curr->next = newNode;
						newNode->prev = curr;
						return;
					}
				}
				curr = curr->next;
			}
		}

		//Get length() function added to get length of the doubly linked list.
		static int length(Node* head) {
			int len = 0;
			Node* curr = head;
			while (curr) {
				len++;
				curr = curr->next;
			}
			return len;
		}

		//Find any data in doubly linked list if its available in there.
		static Node* find(Node* head, int data) {
			Node* curr = head;
			while (head) {
				if (curr->data == data) {
					return curr;
				}
				else{
					curr = curr->next;
				}
			}
			return head;
		}

		//Update any node with a new value.
		static Node* dll_update(Node* &head, int old, int new_data) {
			//DLL_UPDATE here!
		}

		//Delete any node from doubly linked list.
		static void dll_delete(Node* head, int data) {
			Node* curr = head;
			while (curr != nullptr) {
				if (curr->data == data){
					if (curr->next == nullptr && curr->prev == nullptr) {
						curr = nullptr;
						delete curr;
						return;
					}
					else if (curr->prev == nullptr && curr->next != nullptr) {		//Error here!
						head = curr->next;
						curr->next->prev = nullptr;
						curr = nullptr;
						delete curr;
						return;
					}
					else if (curr->next == nullptr) {
						curr->prev->next = nullptr;
						curr->prev = nullptr;
						delete curr;
						return;
					}
					else {
						Node* temp = curr->prev;
						temp->next = curr->next;
						curr->next->prev = temp;
						curr = nullptr;
						return;
					}
				}
				curr = curr->next;
			}
		}
	};
}

#endif // !_DOUBLYLINKEDLIST_H

