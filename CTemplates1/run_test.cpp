// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>

#include <cassert>


int main() {
  /* Testing code below */

  assert(max(1, 17, 3) == 17);
  assert(max(9.2, 4.18, 1.0e8) == 1.0e8);

  // Yes, comparisons work with strings!
  assert(max(std::string("zyx"), std::string("abc"), std::string("qrs")) == std::string("zyx"));
}

