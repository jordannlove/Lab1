//Exec.h

#include <iostream>
#include <string>
#include <fstream>

#ifndef EXEC_H
#define EXEC_H

class Exec
{
public:
  Exec(std::string m_textFile);

private:
  std::string m_textFile;
  bool exit = false;
  int menu = 0;
};

#endif
