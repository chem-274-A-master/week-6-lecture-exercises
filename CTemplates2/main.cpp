/*
  Write a templated class (called Vector3d)
  that represents an XYZ coordinate. The templated
  type should represent type type (double, float, int)
  that is used by the XYZ coordinate.

  Also, write functions that return the x, y, z coordinate
  (ie, you should be able to call v.x(), v.y(), and v.z()
  to get the individual coordinates).

  You should also be able to use these functions to set
  the coordinate (v.x() = 1.234).

  The constructor should take three different values
  (ie, Vector3d<type> v(1, 2, 3))
*/

#include <iostream>
#include <string>


int main() {
  /**********************/
  /* Testing code below */
  /**********************/
  
  Vector3d<int> v(3, 5, 9);
  std::cout << v.x() << " "
            << v.y() << " "
            << v.z() << std::endl;

  Vector3d<std::string> v2("abc", "def", "ghi");
  std::cout << v2.x() << " "
            << v2.y() << " "
            << v2.z() << std::endl;

  v2.z() = "xyz";
  v2.y() = "uvw";
  v2.x() = "rst";

  std::cout << v2.x() << " "
            << v2.y() << " "
            << v2.z() << std::endl;
}