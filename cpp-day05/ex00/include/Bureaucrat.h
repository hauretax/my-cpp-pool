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

  std::string getName();
  int getGrade();
  void goHiger();
  void goLower();

  class GradeTooHighException : public std::exception {
    public:
      std::string  what();
  };
    class GradeTooLowException : public std::exception {
    public:
      std::string  what();
  };

protected:
  const std::string _name;
  int _echelon;
};

#endif