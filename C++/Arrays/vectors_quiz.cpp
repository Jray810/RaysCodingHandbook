/**
 * Author: Raymond Jia
 * Topic: C++ Vectors
 * Last Modified: 8/28/2022
 * 
 * Description: This document contains a speed quiz on usage of C++
 *              vectors.
 **/

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> thisVec);

int main() {
  // 1. Initializing vectors
  
  // Create an empty vector of integers, vec1
  // TODO
  print(vec1);

  // Create a vector of size 5 with all values 1, vec2
  // TODO
  print(vec2);

  // Create a vector from a given array of integers, vec3
  int arr[] = { 1, 2, 3, 4, 5 };
  // TODO
  print(vec3);

  // Create vec4 as a copy of vec2
  // TODO
  print(vec4);

  // 2. Iterators

  // Print the contents of vec3 using iterators
  // TODO

  // 3. Bounds

  // Check if vec1 is empty, if true print "vec1 is empty"
  // TODO

  // Print the length of vec2
  // TODO

  // 4. Element access

  // Print the first element of vec3
  // TODO

  // Print the last element of vec3
  // TODO

  // Print the 3rd element of vec3
  // TODO

  // 5. Array modification

  // Remove the last element of vec3
  // TODO

  // Add 6 to the end of vec3
  // TODO
  print(vec3);

  // Insert 7 as the 2nd element of vec3
  // TODO
  print(vec3);

  // Insert vec2 as the 4th element of vec3
  // TODO
  print(vec3);

  // Insert two 100s as the 6th element of vec3
  // TODO
  print(vec3);

  // Remove the 4th element of vec3
  // TODO
  print(vec3);

  // Remove the 3rd through 5th element of vec3
  // TODO
  print(vec3);

  // Clear vec4
  // TODO
  print(vec4);

  // Swap vec2 and vec3
  // TODO
  print(vec2);
  print(vec3);

  return 0;
}

void print(vector<int> thisVec) {
  for (int i=0; i<thisVec.size(); ++i) {
    cout << thisVec[i] << " ";
  }
  cout << endl;
}