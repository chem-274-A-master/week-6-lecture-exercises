// If you are student, remember that you should never
// include a source file. This is one exception though :)
// Call it "instructor's privilege"
#include <main.cpp>
#include <string>

#include <cassert>


int main() {
  /**********************/
  /* Testing code below */
  /**********************/
  
  Vector3d<int> v(3, 5, 9);
  assert(v.x() == 3);
  assert(v.y() == 5);
  assert(v.z() == 9);

  Vector3d<std::string> v2("abc", "def", "ghi");
  assert(v2.x() == "abc");
  assert(v2.y() == "def");
  assert(v2.z() == "ghi");

  v2.z() = "xyz";
  v2.y() = "uvw";
  v2.x() = "rst";

  assert(v2.x() == "rst");
  assert(v2.y() == "uvw");
  assert(v2.z() == "xyz");

  return 0;
}
