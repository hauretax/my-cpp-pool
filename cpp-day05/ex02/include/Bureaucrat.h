#ifndef Bureaucrat_H
#define Bureaucrat_H

#pragma once

#include <iostream>
#include <string>
#include <ostream>

class Bureaucrat;
#include "Form.h"

class Bureaucrat
{
public:
  Bureaucrat(std::string _name, int _echelon);
  Bureaucrat(Bureaucrat &cpy);
  virtual ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &assign);

  std::string getName();
  int getGrade()const;
  void goHiger();
  void goLower();
  void signForm(Form& form);
  void executeForm(Form const &form);

  class GradeTooHighException : public std::exception
  {
  public:
    std::string what();
  };
  class GradeTooLowException : public std::exception
  {
  public:
    std::string what();
  };

protected:
  const std::string _name;
  int _echelon;
};
  std::ostream &operator<<(std::ostream &o,  Bureaucrat &gens);


#endif