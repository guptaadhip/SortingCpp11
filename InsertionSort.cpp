#include "include/InsertionSort.h"
#include <iostream>

using namespace std;

void InsertionSort::Sort(vector<int>& arr) {
  bool flag = false;
	if (arr.size() <= 0) {
		std::cout << "List is empty\n";
		return;
	}
  int idx = 0;
  while (idx < arr.size()) {
    Place(arr, idx);
    idx++;
  }
}

void InsertionSort::Place(vector<int>& arr, int key) {
  if (key <= 0) {
    return;
  }
  /* find the correct place for the key */
  int idx = 0;
  while (arr[key] > arr[idx]) {
    if (idx > arr.size())
      return;
    idx++;
  }
  int keyValue = arr[key];
  int temp = arr[idx];
  /* move the values and place it */
  for (int i = idx; i < key; i++) {
    int x = arr[i + 1];
    arr[i + 1] = temp;
    temp = x;
  }
  arr[idx] = keyValue;
}
