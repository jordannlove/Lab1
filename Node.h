//Node.h

#include <iostream>
#include <string>

#ifndef NODE_H
#define NODE_H

class Node
{
private:
  int value;
  Node* previous;
  Node* next;

public:
  Node();
  Node(int entry);
  Node(int entry, Node* nextPtr);
  void setValue(int entry);
  int getValue() const;
  void setNext(Node* nextPtr);
  Node* getNext() const;
  void setPrev(Node* prevPtr);
  Node* getPrev() const;
};

#endif
