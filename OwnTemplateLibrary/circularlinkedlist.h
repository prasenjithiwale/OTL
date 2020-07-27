#pragma once

#ifndef _CIRCULARLINKEDLIST_H
#define _CIRCULARLINKEDLIST_H

namespace own {
	class Node {
	public:
		int data;
		Node* next;
		Node(int d): data{ d }, next{ nullptr } {}
	};

	class CLL {
	public:

	};
}

#endif // !_CIRCULARLINKEDLIST_H

