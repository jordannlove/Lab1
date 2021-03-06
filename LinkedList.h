//LinkedList.h

#include <iostream>
#include <string>

#include "Node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList
{
public:
  LinkedList();
  virtual ~LinkedList();
  bool add(int entry);
  bool deleteElement(int entry);
  void deleteDuplicates();
  bool find(int entry);
  int findNext(int entry);
  void print();
  int printAtX(int entry);
  bool isEmpty();
  int length();

private:
  Node* head;
  int itemCount;
  Node* getNodeAt(int position) const;
};

#endif
