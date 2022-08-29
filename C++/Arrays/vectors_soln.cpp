/**
 * Author: Raymond Jia
 * Topic: C++ Vectors
 * Last Modified: 8/28/2022
 * 
 * Description: This document contains the solution to the quiz on usage of C++
 *              vectors.
 **/

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> thisVec);

int main() {
  // 1. Initializing vectors
  
  // Create an empty vector of integers, vec1
  vector<int> vec1;
  print(vec1);

  // Create a vector of size 5 with all values 1, vec2
  vector<int> vec2(5, 1);
  print(vec2);

  // Create a vector from a given array of integers, vec3
  int arr[] = { 1, 2, 3, 4, 5 };
  vector<int> vec3(arr, arr+5);
  print(vec3);

  // Create vec4 as a copy of vec2
  vector<int> vec4(vec2.begin(), vec2.end());
  print(vec4);

  // 2. Iterators

  // Print the contents of vec3 using iterators
  for (vector<int>::iterator it = vec3.begin(); it != vec3.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  // 3. Bounds

  // Check if vec1 is empty, if true print "vec1 is empty"
  if (vec1.empty()) cout << "vec1 is empty" << endl;

  // Print the length of vec2
  cout << vec2.size() << endl;

  // 4. Element access

  // Print the first element of vec3
  cout << vec3.front() << endl;

  // Print the last element of vec3
  cout << vec3.back() << endl;

  // Print the 3rd element of vec3
  cout << vec3[2] << endl;

  // 5. Array modification

  // Remove the last element of vec3
  vec3.pop_back();

  // Add 6 to the end of vec3
  vec3.push_back(6);
  print(vec3);

  // Insert 7 as the 2nd element of vec3
  vec3.insert(vec3.begin()+1, 7);
  print(vec3);

  // Insert vec2 as the 4th element of vec3
  vec3.insert(vec3.begin()+3, vec2.begin(), vec2.end());
  print(vec3);

  // Insert two 100s as the 6th element of vec3
  vec3.insert(vec3.begin()+5, 2, 100);
  print(vec3);

  // Remove the 4th element of vec3
  vec3.erase(vec3.begin()+3);
  print(vec3);

  // Remove the 3rd through 5th element of vec3
  vec3.erase(vec3.begin()+2, vec3.begin()+5);
  print(vec3);

  // Clear vec4
  vec4.clear();
  print(vec4);

  // Swap vec2 and vec3
  vec2.swap(vec3);
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