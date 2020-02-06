//Exec.cpp

#include <iostream>
#include <string>
#include <fstream>

#include"Exec.h"
#include "LinkedList.h"


Exec::Exec(std::string m_textFile)
{
  std::ifstream inFile;
  inFile.open(m_textFile); //open file passed from main
  if(!inFile.is_open())
  {
    std::cout << "File could not be opened.\n";
  }
  else
  {
    std::cout << "File opened.\n";
    int datum;
    LinkedList list;

    while(inFile >> datum) //while not the end of file
    {
      list.add(datum);
    }

    //main menu
    // 1) isEmpty()
    // 2) length()
    // 3) insert(x)
    // 4) deleteElement(x)
    // 5) deleteDuplicates()
    // 6) find(x)
    // 7) findNext(x)
    // 8) print()
    // 9) reverseList()
    // 10) printAt(x)
    // 11) exit()

    // exit = false;
    while(!exit)
    {
      std::cout << "\n\nMenu:\n1) isEmpty()\n2) length()\n3) insert(x)\n";
      std::cout << "4) deleteElement(x)\n5) deleteDuplicates()\n6) find(x)\n";
      std::cout << "7) findNext(x)\n8) print()\n9) reverseList()\n";
      std::cout << "10) printAt(x)\n11) exit()\n\nPlease enter a number:";
      std::cin >> menu;

      if(menu == 1)
      {
        list.isEmpty();
      }
      else if(menu == 2)
      {
        list.length();
      }
      else if(menu == 3)
      {
        int entry;
        std::cout << "\nPlease enter the integer you'd like to insert: ";
        std::cin >> entry;
        if(list.add(entry) == true)
        {
          std::cout << "\nEntry was inserted.";
        }
        else
        {
          std::cout << "\nEntry was not inserted.";
        }
      }
      else if(menu == 4) //!
      {
        int entry;
        std::cout << "\nPlease enter the integer you'd like to delete: ";
        std::cin >> entry;
        list.deleteElement(entry);
        if(list.deleteElement(entry) == true)
        {
          std::cout << "\nElement was deleted.";
        }
        else
        {
          std::cout << "\nElement was not deleted.";
        }
      }
      else if(menu == 5)
      {
        //haha nope
      }
      else if(menu == 6)
      {
        int entry;
        std::cout << "\nPlease enter the integer you'd like to find: ";
        std::cin >> entry;
        if(list.find(entry) == true)
        {
          std::cout << "\nEntry was found.";
        }
        else
        {
          std::cout << "\nEntry was not found.";
        }
      }
      else if(menu == 7)
      {

      }
      else if(menu == 8)
      {

      }
      else if(menu == 9)
      {

      }
      else if(menu == 10)
      {

      }
      else if(menu == 11)
      {
        exit = true;
      }
      else
      {
        std::cout << "\nInvalid menu choice; please enter an integer 1-11.";
      }
    }
  }
}
