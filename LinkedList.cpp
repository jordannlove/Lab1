//LinkedList.cpp

#include <iostream>
#include <string>

#include "LinkedList.h"
#include "Node.h"


//constructors
LinkedList::LinkedList()
{
  std::cout << "LinkedList constructor reached\n";
  head = nullptr;
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


bool LinkedList::deleteElement(int entry)
{
  if(head == nullptr)
  {
    return false;
  }
  else
  {
    if(head->getValue() == entry)
    {
      head = head->getNext();
      return true;
    }
    Node* current = head;
    while(current->getNext() != nullptr)
    {
      if(current->getNext()->getValue() == entry)
      {
        current->setNext(current->getNext()->getNext());
        return true;
      }
      current = current->getNext();
    }
    return false;
  }
}


bool LinkedList::find(int entry)
{
  std::cout << "LinkedList find() reached.\n";
  std::cout << entry << '\n';

  if(head == nullptr)
  {
    return false;
  }
  else
  {
    if(head->getValue() == entry)
    {
      return true;
    }
    Node* current = head;
    while(current->getNext() != nullptr)
    {
      if(current->getNext()->getValue() == entry)
      {
        return true;
      }
      current = current->getNext();
    }
    return false;
  }


  Node* newNodePtr = new Node();
  newNodePtr->setValue(entry);
  newNodePtr->setNext(head);
  head = newNodePtr;
  itemCount++;
  return true;
}


bool LinkedList::isEmpty()
{
  if(head == nullptr)
  {
    std::cout << "\nThe list is empty.";
    return true;
  }
  else
  {
    std::cout << "\nThe list is not empty.";
    return false;
  }
}


int LinkedList::length()
{
  std::cout << "\nThe length of the list is " << itemCount << '.';
  return itemCount;
}
