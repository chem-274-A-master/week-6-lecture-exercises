/*
  C++ inheritance

  Below is the base class from the lecture. Extend this class using inheritance
  to a Programmer class, which, stores a vector of programming languages
  that the programmer is familiar with.

  These should be accessible through a languages() member function

*/

#include <iostream>
#include <string>
#include <vector>

class Employee
{
    private:
        int id_;
        std::string name_;

    public:
        Employee(int id, std::string name)
            : id_(id), name_(name)
        { }

        int id() const { return id_; }

        std::string name() const { return name_; }

        void display() const
        {
            std::cout << "[" << id_ << "] " << name_ << std::endl;
        }
};


/* Programmer code here */

int main(void)
{
  /* testing code below */
  Programmer p(1, "Dr. Pritchard", {"C++", "Python", "fortran"});

  auto langs = p.languages();
  for(const auto & l : langs)
    std::cout << l << std::endl;
  return 0;
}