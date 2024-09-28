// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>


int main(void)
{
    Employee bill(1, "Bill");
    Scientist emily(2, "Emily", "chemistry");

    print_employee(bill);
    print_employee(emily);

    return 0;
}
