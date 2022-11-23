#ifndef Bureaucrat_H
#define Bureaucrat_H

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
public:
  Bureaucrat(std::string _name, int _echelon);
  Bureaucrat(Bureaucrat &cpy);
  virtual ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &assign);
  
  class test : public std::exception {
    public:
      std::string  what();
  };
    class test : public std::exception {
    public:
      std::string  what();
  };

protected:
  const std::string _name;
  int _echelon;
};

#endif