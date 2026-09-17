# Queue (C++)

A generic **Queue** (`clsMyQueue<T>`) implementation in C++, built internally using a doubly linked list, with additional utility operations beyond the standard queue interface.

## Standard Queue Operations

| Method | Description |
|---|---|
| `Push(T Value)` | Add an item to the back of the queue |
| `pop()` | Remove the item from the front of the queue |
| `front()` | Get the item at the front of the queue |
| `back()` | Get the item at the back of the queue |
| `Size()` | Get the number of items in the queue |
| `IsEmpty()` | Check whether the queue is empty |
| `Print()` | Print all items in the queue |

## Extended Operations

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
