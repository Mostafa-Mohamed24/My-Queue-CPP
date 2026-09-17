# Doubly Linked List & Queue (C++)

A C++ project implementing a generic **Doubly Linked List** (`clsDblLinkedList<T>`) and a **Queue** (`clsMyQueue<T>`) built on top of it using composition.

## Project Structure

- `clsDblLinkedList.h` — Generic doubly linked list template class
- `clsMyQueue.h` — Queue implementation, wraps `clsDblLinkedList<T>` internally
- `main.cpp` — Demo program showing usage of the Queue

## Doubly Linked List — `clsDblLinkedList<T>`

A generic (templated) implementation supporting any data type.

### Methods

| Method | Description |
|---|---|
| `InsertAtBeginning(T Value)` | Insert a new node at the beginning of the list |
| `InsertAtEnd(T Value)` | Insert a new node at the end of the list |
| `InsertAfter(Node* Current, T Value)` | Insert a new node after a given node |
| `InsertAfter(int Index, T Value)` | Insert a new node after a given index |
| `Find(T Value)` | Search for a node by value |
| `DeleteNode(Node*& NodeToDelete)` | Delete a specific node |
| `DeleteFirstNode()` | Delete the first node |
| `DeleteLastNode()` | Delete the last node |
| `GetNode(int Index)` | Get a node by its index |
| `GetItem(int Index)` | Get the value stored at a given index |
| `UpdateItem(int Index, T NewValue)` | Update the value at a given index |
| `Reverse()` | Reverse the list in place |
| `PrintList()` | Print all elements in the list |
| `Size()` | Return the number of elements |
| `IsEmpty()` | Check whether the list is empty |
| `Clear()` | Remove all nodes from the list |

## Queue — `clsMyQueue<T>`

A Queue (FIFO) implementation built internally using `clsDblLinkedList<T>`, with additional utility operations beyond the standard queue interface.

### Standard Queue Operations

| Method | Description |
|---|---|
| `Push(T Value)` | Add an item to the back of the queue |
| `pop()` | Remove the item from the front of the queue |
| `front()` | Get the item at the front of the queue |
| `back()` | Get the item at the back of the queue |
| `Size()` | Get the number of items in the queue |
| `IsEmpty()` | Check whether the queue is empty |
| `Print()` | Print all items in the queue |

### Extended Operations

| Method | Description |
|---|---|
| `GetItem(int Index)` | Get the item at a specific index |
| `UpdateItem(int Index, T NewValue)` | Update the item at a specific index |
| `InsertAfter(int Index, T Value)` | Insert a new item after a specific index |
| `InsertAtFront(T Value)` | Insert a new item at the front of the queue |
| `InsertAtBack(T Value)` | Insert a new item at the back of the queue (same as `Push`) |
| `Reverse()` | Reverse the order of items in the queue |
| `Clear()` | Remove all items from the queue |

> **Note:** The extended operations (`GetItem`, `UpdateItem`, `InsertAfter`, `InsertAtFront`, `Reverse`) go beyond strict FIFO queue behavior and are provided as additional utilities on top of the standard queue interface.

## Example Usage

\`\`\`cpp
#include "clsMyQueue.h"

int main()
{
    clsMyQueue<int> MyQueue;

    MyQueue.Push(10);
    MyQueue.Push(20);
    MyQueue.Push(30);
    MyQueue.Push(40);
    MyQueue.Push(50);

    MyQueue.Print();                    // 10  20  30  40  50

    cout << MyQueue.Size();             // 5
    cout << MyQueue.front();            // 10
    cout << MyQueue.back();             // 50

    MyQueue.pop();                      // removes 10

    // Extended operations
    cout << MyQueue.GetItem(2);
    MyQueue.Reverse();
    MyQueue.UpdateItem(2, 300);
    MyQueue.InsertAfter(2, 400);
    MyQueue.InsertAtFront(100);
    MyQueue.InsertAtBack(600);
    MyQueue.Clear();

    return 0;
}
\`\`\`
