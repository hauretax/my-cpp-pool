#ifndef Bureaucrat_H
#define Bureaucrat_H

#pragma once

#include <iostream>
#include <string>

class Bureaucrat: public std::exception
{
public:
  Bureaucrat(std::string _name, int _echelon);
  Bureaucrat(Bureaucrat &cpy);
  virtual ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &assign);

  virtual const char *what() const throw();

protected:
  const std::string _name;
  int _echelon;
};

#endif