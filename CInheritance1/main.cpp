/*
  C++ inheritance

  Below is the base class from the lecture. Extend this class using inheritance
  to a Programmer class, which, stores a vector of programming languages
  that the programmer is familiar with.

  These should be accessible through a languages() member function

*/

#include <string>

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
