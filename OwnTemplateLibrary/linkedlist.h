//Author: Prasenjit Hiwale
//Date: 07/25/2020

//CRUD linkedlist.


/*
This library is all about singly linked list. Here you can find following functions;
	1. Insert a new node in linkedlist.
	2. Search a node.
	3. Insert a new node at random position.
	4. Find the length of the linkedlist.
	5. Delete a random node.
	6. Update a random node.
*/

#pragma once

#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include<iostream>

namespace own {
	class Node {
	public:
		int data;
		Node* next;
		Node(int d): data{d}, next{nullptr} {}
	};


	class linkedlist {
	public:

		//Insert a new node to the rear of the linkedlist.
		static void insert(Node* &head, int data) {
			Node* newNode = new Node(data);

			if (head == nullptr) {
				head = newNode;
			} else {
				Node* temp = head;

				while (temp -> next != nullptr){
					temp = temp ->next;
				}

				temp->next = newNode;
			}
		}

		//Print whole linkedlist
		static void linkedlist_print(Node* head) {
			Node* temp = head;
			while (temp){
				std::cout << temp->data << std::endl;
				temp = temp->next;
			}
			std::cout << std::endl;
		}

		//Insert a new node at a random spot.
		static Node* insert_after(Node* &head, int loc, int data) {
			Node* curr = head;
			Node* newNode = new Node(data);
			Node* temp;
			while (curr) {
				if (curr->data == loc) {
					if (curr->next == nullptr) {
						curr->next = newNode;
						return newNode;
					}else{
						temp = curr->next;
						curr->next = newNode;
						newNode->next = temp;
						return newNode;
					}
				}
				curr = curr->next;
			}
			return new Node(-1);
		}

		//Remove a random element from linkedlist.
		static void remove(Node* &head, int data) {
			Node* curr = head;
			Node* temp = nullptr;
			while (curr){
				if (curr->next != nullptr) {
					if (curr->data == data){
						temp = curr->next;
						curr = nullptr;
						head = temp;
						delete curr;
						return;
					}
					if (curr->next->data == data) {
						temp = curr->next;
						curr->next = temp->next;
						delete temp;
						return;
					}
				}
				else{
					std::cout << "nothing deleted!" << std::endl;
					return;
				}
				curr = curr->next;
			}
		}

		//Update a random node in the linkedlist.
		static Node* update(Node* &head, int data, int newData) {
			Node* curr = head;
			while (curr) {
				if (curr->data == data) {
					curr->data = newData;
					return curr;
				}
				curr = curr->next;
			}
			return new Node(-1);
		}

		//Find length of the linkedlist.
		static int length(Node* head) {
			int len = 0;
			Node* temp = head;
			while (temp){
				len++;
				temp = temp->next;
			}
			return len;
		}

		//Search a node in linkedlist.
		static Node* search(Node* head, int data) {
			Node* curr = head;
			while (curr) {
				if (curr->data == data){
					return curr;
				}
				curr = curr->next;
			}
			return new Node(-1);
		}
	};
}

#endif // !_LINKEDLIST_H

