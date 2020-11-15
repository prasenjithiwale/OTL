//Author: Prasenjit Hiwale
//Date: 11/15/2020

//CRUD Queue.


/*
This library is all about Queue. Here you can find following functions;
	1. Push on to the queue.
	2. Search any node if available in queue.
	3. Pop item from queue.
	4. Check if empty.
	5. Push unique item.
	6. Get front ietm.
	7. Get rear item.
*/

#pragma once
#ifndef _QUEUE_H
#define _QUEUE_H

namespace own {
	class Node {
		int data;
		Node* next;
		Node(int data) : data{ data }, next{ nullptr } {};
		friend class queue;
	};

	class queue {
		public:
			static int Front(Node* &head);
			static int Rear(Node* &head);
			static bool isEmpty(Node* &head);
			static bool isAvail(Node* &head, int data);
			static int Pop(Node* &head);
			static int Push(Node* &head, int data);
			static int u_push(Node* &head, int data);
	};

	int queue::Front(Node* &head) {
		if (isEmpty(head))
			return -1;
		return head->data;
	}

	int queue::Rear(Node* &head) {
		Node* curr = head;
		if (isEmpty(head)){
			return -1;
		}

		while (curr->next != nullptr)
			curr = curr->next;
		
		return curr->data;
	}

	bool queue::isEmpty(Node* &head) {
		if (head == nullptr)
			return true;
		else
			return false;
	}

	bool queue::isAvail(Node* &head, int data) {
		Node* temp = head;

		while (temp != nullptr) {
			if (temp->data == data)
				return true;
			temp = temp->next;
		}

		return false;
	}

	int queue::Push(Node* &head, int data) {
		Node* curr = new Node(data);
		Node* temp = head;
		if (isEmpty(head)) {
			head = curr;
			return head->data;
		}
		curr->next = temp;
		head = curr;
		return head->data;
	}

	int queue::Pop(Node* &head) {
		Node* curr = head;
		if (isEmpty(head)) {
			return -1;
		}
		curr = curr;
		while (curr->next->next != nullptr) {
			curr = curr->next;
		}
		int rvalue = curr->next->data;
		delete curr->next;
		curr->next = nullptr;
		return rvalue;
	}

	int queue::u_push(Node* &head, int data) {
		Node* curr = new Node(data);
		Node* temp = head;
		if (isEmpty(head)) {
			head = curr;
			return head->data;
		}
		if (!isAvail(head, data)) {
			curr->next = curr;
			head = curr;
		}
		return head->data;
	}
}

#endif // !_QUEUE_H
