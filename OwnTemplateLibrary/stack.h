#pragma once

#ifndef _STACK_H
#define _STACK_H

namespace own {
	class Node {
		int data;
		Node* next;
		Node(int d): data{d}, next{nullptr}{}
		friend class stack;
	};

	class stack {
	public:
		static int push(Node* &head, int data);
		static bool isEmpty(Node* &head);
		static int pop(Node* &head);
		static bool isAvail(Node* &head, int data);
		static int u_push(Node* &head, int data);
		static int top(Node* &head);
	};

	int stack::push(Node* &head, int data) {
		Node* temp = new Node(data);
		if (head == nullptr) {
			head = temp;
			return data;
		}
		Node* curr = head;
		temp->next = curr;
		head = temp;
		return temp->data;
	}

	bool stack::isEmpty(Node* &head) {
		if (head == nullptr)
			return true;
		else
			return false;
	}

	int stack::pop(Node* &head) {
		if (isEmpty(head))			//Check if the head is empty.
			return -1;

		int rvalue = head->data;		//save head value in temp variable

		if (head->next == nullptr) {		//check if the stack have only one value
			delete head;					//if stack has only one value then delete stack.
			return rvalue;				//return "rvalue"
		}
		
		Node* curr = head->next;		//save next value in temp node
		delete head;				//delete head
		head = curr;				//set head as curr for further tasks.
		return rvalue;
	}

	bool stack::isAvail(Node* &head, int data) {
		Node* curr = head;
		while (curr->next != nullptr) {
			if (curr->data == data)
				return true;
			curr = curr->next;
		}
		return false;
	}

	int stack::u_push(Node* &head, int data) {
		Node* temp = new Node(data);
		if (isEmpty(head)) {
			head = temp;
			return head->data;
		}

		if (!isAvail(head, data)) {
			Node* curr = head;
			temp->next = curr;
			head = temp;
			return temp->data;
		}

		return -1;
	}

	int stack::top(Node* &head) {
		return head->data;
	}
}

#endif // !_STACK_H

