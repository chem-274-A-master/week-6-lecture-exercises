/* Below is the example from the lecture.

   In this case, the print_employee function takes a reference to the
   base Employee class, and therefore can only call the display() function
   of the base class.

   But we often want to call functions of the derived class. One workaround is to use templates.

   Your goal: Change the print_employee function (to use templates) so that it will successfully
   call the display() function of whatever class type was given to it
 */

#include <string>

class Employee
{
    private:
        int id_;
        std::string name_;

    public:
        Employee()
            : id_(0), name_("???")
        {}

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


class Scientist: public Employee
{
    private:
        std::string field_;

    public:
        Scientist(int id, std::string name, std::string field)
            : Employee(id, name), field_(field)
        { }

        std::string field() const { return field_; }

        void display() const
        {
            std::cout << "[" << id() << "] " << name() << " (" << field() << ")" << std::endl;
        }
};

void print_employee(const Employee & emp)
{
    emp.display();
}
