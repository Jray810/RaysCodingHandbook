/**
 * Author: Raymond Jia
 * Topic: Dynamic Arrays
 * Last Modified: 8/28/2022
 * 
 * Description: This document contains a class implementation of a Dynamic Array
 *              performed manually. Note that this implementation lacks a lot of
 *              standard error checking such as array index out of bounds errors.
 **/

#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class DynamicArray {
  public:
    // Constructor
    // Default array size of 8
    DynamicArray(int size = 8) {
      curr_size = size;
      max_size = size * 2;
      head = new int[max_size];
    }

    // Destructor
    ~DynamicArray() {
      delete [] head;
    }

    // Operators
    int get(int i) {
      return *(head + sizeof(int) * i);
    }

    void set(int i, int val) {
      *(head + sizeof(int) * i) = val;
    }

    // Return deleted value
    int delete_last() {
      curr_size--;
      return get(curr_size); 
    }

    void insert_last(int val) {
      // Check if there is buffer left
      if (curr_size == max_size) resize();
      set(curr_size, val);
      curr_size++;
    }

    void insert_first(int val) {
      // Check if there is buffer left
      if (curr_size == max_size) resize();
      shift_right(0);
      curr_size++;
      set(0, val);
    }

    // Return deleted value
    int delete_first() {
      int val = get(0);
      shift_left(1);
      curr_size--;
      return val;
    }

    void insert_at(int i, int val) {
      // Check if there is buffer left
      if (curr_size == max_size) resize();
      shift_right(i);
      curr_size++;
      set(i, val);
    }

    // Return deleted value
    int delete_at(int i) {
      int val = get(i);
      shift_left(i+1);
      curr_size--;
      return val;
    }
  
  private:
    void resize() {
      // Allocate new memory space
      int* newHead = new int[max_size*2];

      // Copy over data
      for (int i=0; i<max_size; ++i) {
        *(newHead + sizeof(int) * i) = get(i);
      }

      // Cleanup and reset variables
      delete [] head;
      head = newHead;
      max_size *= 2;
    }

    // Index of leftmost item to be shifted
    void shift_right(int i) {
      for (int j=curr_size-1; j>=i; --j) {
        set(j+1, get(j));
      }
    }

    // Index of leftmost item to be shifted
    void shift_left(int i) {
      for (int j=i; j<curr_size; ++j) {
        set(j-1, get(j));
      }
    }
  
  private:
    int* head;
    int curr_size;
    int max_size;
};

#endif