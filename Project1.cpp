#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main()
{
	clsMyQueue <int> MyQueue;

	MyQueue.Push(10);
	MyQueue.Push(20);
	MyQueue.Push(30);
	MyQueue.Push(40);
	MyQueue.Push(50);

	cout << "\nQueue: " << endl;
	MyQueue.Print();

	cout << "\n\nQueue Size : " << MyQueue.Size();
	cout << "\nQueue Front : " << MyQueue.front();
	cout << "\nQueue Back : " << MyQueue.back();


	MyQueue.pop();

	cout << "\n\nQueue after pop() : " << endl;
	MyQueue.Print();

	// Extension 1 
	cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

	// Extension 2
	MyQueue.Reverse();
	cout << "\n\nQueue After Reverse : \n";
	MyQueue.Print();

	// Extension 3 
	MyQueue.UpdateItem(2, 300);
	cout << "\n\nQueue After Updating Item 2 : \n";
	MyQueue.Print();

	// Extension 4 
	MyQueue.InsertAfter(2, 400);
	cout << "\n\nQueue After Insert After Item 2 : \n";
	MyQueue.Print();

	// Extension 5
	MyQueue.InsertAtFront(100);
	cout << "\n\nQueue After Insert At Front :\n";
	MyQueue.Print();

	// Extension 6
	MyQueue.InsertAtBack(600);
	cout << "\n\nQueue After Insert At Back : \n";
	MyQueue.Print();

	// Extension 7
	MyQueue.Clear();
	cout << "\n\nQueue After Clear() : \n";
	MyQueue.Print();



	system("pause>0");
	return  0;
}