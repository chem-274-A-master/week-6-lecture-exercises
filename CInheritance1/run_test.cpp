// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>


int main(void)
{
  /* testing code below */
  Programmer p(1, "Dr. Pritchard", {"C++", "Python", "fortran"});

  assert(p.id() == 1);
  assert(p.name() == "Dr. Pritchard");

  std::vector<std::string> langs = p.languages();
  assert(langs.size() == 3);
  assert(langs[0] == "C++");
  assert(langs[1] == "Python");
  assert(langs[2] == "fortran");

  return 0;
}
