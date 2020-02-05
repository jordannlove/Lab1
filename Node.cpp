//Node.cpp

#include <iostream>
#include <string>

#include "Node.h"

//constructors
Node::Node()
{
  next = nullptr;
}

Node::Node(int entry)
{
  value = entry;
  next = nullptr;
}

Node::Node(int entry, Node* nextPtr)
{
  value = entry;
  next = nextPtr;
}

//setters and getters
void Node::setValue(int entry)
{
  value = entry;
}

int Node::getValue() const
{
  return value;
}

void Node::setNext(Node* nextPtr)
{
  next = nextPtr;
}

Node* Node::getNext() const
{
  return next;
}

void Node::setPrev(Node* prevPtr)
{
  previous = prevPtr;
}

Node* Node::getPrev() const
{
  return previous;
}
