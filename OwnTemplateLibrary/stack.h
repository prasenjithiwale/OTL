#pragma once

#ifndef _STACK_H
#define _STACK_H

namespace own {
	class Node {
		int data;
		Node* next;
		Node(int d): data{d}, next{nullptr}{}
	};

	class stack {
	public:
		static void insert(Node* &head, int data) {

		}
	};
}

#endif // !_STACK_H

