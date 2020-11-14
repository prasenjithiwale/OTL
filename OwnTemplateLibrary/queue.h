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

		while (temp->next != nullptr) {
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
		curr = curr->next;
		while (curr->next != nullptr) {
			curr = curr->next;
		}
		int rvalue = curr->data;
		delete curr;
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
