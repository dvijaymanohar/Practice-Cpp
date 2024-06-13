
#if 0
#include <iostream>
#include <utility>
#include <vector>

int main(int argc, char *argvp[]) {

  std::vector<int> big_vector = {1000000, 4343};
  std::vector<int> vec;

  std::vector<int>::iterator it;

  for (it = big_vector.begin(); it != big_vector.end(); ++it) {
    std::cout << *it << " ";
  }

  std::cout << std::endl;

  vec = std::move(big_vector);

  for (it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }

  std::cout << std::endl;

  return 0;
}

#endif

#if 0
#include <iostream>
#include <vector>

using namespace std;

int process_data(vector<int> &vec) {

#if 0
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << " ";
  }
#endif

  for (int i : vec) {
    cout << i << "\t";
  }

  return 0;
}

auto main(int argc, char **argv) -> int {
  std::vector<int> vec(5, 5); // Vector of 10 integers, intialized to 5.
  // std::vector<int> vec(10); // Vector of 10 integers
  // std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  // Reserve space for 100 elements
  vec.reserve(100);

  // Push the element at the end of the vector
  vec.push_back(12);

  // process_data(vec);

  try {
    // Safeste way to access the element using at, then indexing like an array
    // cout << "value at position 6: " << vec[7] << endl;
    cout << "value at position 6: " << vec.at(6) << endl;
  } catch (const std::out_of_range &e) {
    cout << " Out of range exception occured" << endl;
  }

  // vec.pop_back();

  // process_data(vec);

  // vec.clear();

  process_data(vec);

  return 0;
}

#endif

/**
 * @brief Problem statement
 * Implement the function int compute_closest_to_zero(vector<int> ts) which
 * takes an array of temperatures ts and returns the temperature closest to 0.
 * Constraints:
 * • If the array is empty, the function should return 0
 * • 0 ≤ts size ≤ 10000
 * • If two temperatures are equally close to zero, the positive temperature
 * must be returned. For example, if the input is -5 and 5, then 5 must be
 * returned.
 *
 */

#include <ctime>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

int compute_closest_to_zero(std::vector<int> &ts) {
  int negative_temp = 0;
  int positive for (int i : ts) {}
}

// Function to generate a vector of random integers
void generateRandomVector(std::vector<int> &randomVector, size_t size,
                          int minValue, int maxValue) {
  // Initialize a random number generator with a random seed
  std::mt19937 rng(static_cast<unsigned>(std::time(nullptr)));
  // Define the distribution range
  std::uniform_int_distribution<int> distribution(minValue, maxValue);

  // Fill the vector with random values
  for (size_t i = 0; i < size; ++i) {
    randomVector[i] = distribution(rng);
  }
}

auto main(int argc, char **argv) -> int {
  size_t vectorSize = 10; // Size of the vector
  int minValue = -10;     // Minimum value of random numbers
  int maxValue = 10;      // Maximum value of random numbers

  std::vector<int> ts(vectorSize, 0);

  // Generate the random vector
  generateRandomVector(ts, vectorSize, minValue, maxValue);

  // Output the random vector
  std::cout << "Random Vector: ";
  for (const int &value : ts) {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  return 0;
}
