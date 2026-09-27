// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>
#include <sstream>


int main(void)
{
    Employee bill(1, "Bill");
    Scientist emily(2, "Emily", "chemistry");

    std::ostringstream output;
    std::streambuf* previous = std::cout.rdbuf(output.rdbuf());
    print_employee(bill);
    print_employee(emily);
    std::cout.rdbuf(previous);

    assert(output.str() == "[1] Bill\n[2] Emily (chemistry)\n");

    return 0;
}
