/*
*** Basic node declaration.*** 
Exercise 4 in the book: copy the string "Wilbur's brother Orville" 
to the variable to which head points.
*/

#include <iostream>
using namespace std;

int main() {
	const int STRING_SIZE = 30;
	struct ListNode {
		char item[STRING_SIZE];
		int count;
		ListNode* link;
	};

	ListNode* head = new ListNode;
	head->count = 4;
	strcpy_s(head->item, "Wilbur's brother Orville");
	cout << head->item<<endl;
	cout << head->count<<endl;
	
	return 0;
}