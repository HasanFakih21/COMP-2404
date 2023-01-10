#include <iostream>
#include <string>
using namespace std;

#include "Queue.h"

Queue::Queue() : head(NULL), tail(NULL) { }

Queue::~Queue()
{
  Node* currNode;
  Node* nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode;
    currNode = nextNode;
  }
}

bool Queue::isEmpty() {
    if(head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void Queue::peekFirst(WHLocation** loc) {
    *loc = head->data;
}

void Queue::popFirst(WHLocation** loc) {
    if(isEmpty) {
        *loc = NULL;
    }
    else {
         Node* prevNode;
         prevNode = head;
        *loc = head->data;
        head = head->next;
        delete prevNode;
    }
}

void Queue::addLast(WHLocation* loc) {
    Node* newNode;
    Node* currNode;
    newNode = new Node;
    newNode->data = loc;
    newNode->next = NULL;
    
    currNode = tail;
    
    if(isEmpty()) {
        head = newNode;
        tail = newNode;
    }
    else {
        currNode->next = newNode;
        tail = newNode;
    }
}

void Queue::print() const
{
  Node* currNode = head;

  while (currNode != NULL) {
    currNode->data->print();
    currNode = currNode->next;
  }
}
