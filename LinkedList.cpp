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

void LinkedList::deleteDuplicates() //!
{
  Node* temp = head;
  Node* temp2 = nullptr;
  Node* temp3 = nullptr;
  while(temp != nullptr)
  {
    temp2 = temp;
    while(temp2->getNext() != nullptr)
    {
      if(temp2->getNext()->getValue() == temp->getValue())
      {
        temp3 = temp2->getNext();
        Node* temp4 = temp2->getNext()->getNext();
        temp2->setNext(temp4);
        delete temp3;
      }
    }
  }
}


bool LinkedList::find(int entry)
{
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
}


int LinkedList::findNext(int entry)
{
  if(head->getValue() == entry)
  {
    return head->getNext()->getValue();
  }
  Node* current = head;
  while(current->getNext() != nullptr)
  {
    if(current->getNext()->getValue() == entry)
    {
      return current->getNext()->getNext()->getValue();
    }
    current = current->getNext();
  }
}


void LinkedList::print()
{
  if(head == nullptr)
  {
    std::cout << "\nThe list is empty.";
  }
  else
  {
    std::cout << "\nList: " << head->getValue() << ' ';
    Node* current = head;
    while(current->getNext() != nullptr)
    {
      std::cout << current->getNext()->getValue() << ' ';
      current = current->getNext();
    }
  }
}


int LinkedList::printAtX(int entry)
{
  if(head != nullptr)
  {
    Node* current = head;
    for(int i = 1; i < entry; i++)
    {
      if(current->getNext() != nullptr)
      {
        current = current->getNext();
      }
      else
      {
        return -1;
      }
    }
    return current->getValue();
  }
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
