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

private:
  Node* head;
  int itemCount;
  Node* getNodeAt(int position) const;
};

#endif
