#include <vector>
#include <iostream>

int main() {
  // Avoid std::vector<bool>
  std::vector<char> vec; // Use std::vector<char> or std::vector<uint8_t> instead
  vec.push_back(1); //Represent true
  vec.push_back(0); //Represent false
  std::cout << "vec[0]: " << static_cast<int>(vec[0]) << std::endl; // Access elements safely
  std::cout << "vec[1]: " << static_cast<int>(vec[1]) << std::endl; // Access elements safely

  return 0;
}
