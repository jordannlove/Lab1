//LinkedList.cpp

#include <iostream>
#include <string>

#include "LinkedList.h"
#include "Node.h"


//constructors
LinkedList::LinkedList()
{
  std::cout << "LinkedList constructor reached\n";
  //head = nullptr;
  itemCount = 0;
}

LinkedList::~LinkedList()
{

}


//methods
bool LinkedList::add(int entry)
{
  std::cout << "LinkedList add() reached.\n";
  std::cout << entry << '\n';

  Node* newNodePtr = new Node();
  newNodePtr->setValue(entry);
  newNodePtr->setNext(head);
  head = newNodePtr;
  itemCount++;
  return true;
}
