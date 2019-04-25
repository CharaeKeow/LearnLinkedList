/*=== Basic Linked List node declaration ===*/

#include <iostream>
using namespace std;

int main() {
	struct Box { //node
		char name[20];
		int number;
		Box* next;
	};

	typedef Box* BoxPtr; //Point to next Box

	BoxPtr head; //declare head  
	head = new Box; //head is new box
	strcpy_s(head->name, "Sally"); //copy "Sally" into name. Head point to this
	head->number = 18; //Set number = 18. Head also point to this.

	cout << (*head).name << endl; //Print the name of the node  that head points to.
	cout << head->name << endl; //Same as above but seems smarter.
	cout << (*head).number << endl; //You still don't understand this?
	cout << head->number << endl; //Never knew that you're this dumb.
	
	return 0;
}