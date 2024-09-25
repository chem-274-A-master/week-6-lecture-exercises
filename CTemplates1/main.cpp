#include <iostream>

/* Write a template function to compute the maximum value of three given values (called max)

   The function should take in three arguments, and use a template so that the
   arguments can be of any type (although they must all be the same type).

   The function should also return data of the same type.
*/


int main() {
  /* Testing code below */

  std::cout << max(1, 17, 3) << std::endl;
  std::cout << max(9.2, 4.18, 1.0e8) << std::endl;

  // Yes, comparisons work with strings!
  std::cout << max(std::string("zyx"), std::string("abc"), std::string("qrs")) << std::endl;
}