#include "include/SelectionSort.h"
#include <iostream>

using namespace std;

void SelectionSort::Sort(vector<int>& arr) {
  bool flag = false;
	if (arr.size() <= 0) {
		std::cout << "List is empty\n";
		return;
	}
  int idx = 0;
  while (idx <= arr.size()) {
    /* Find the smallest */
    int small = idx;
    for(int i = idx; i < arr.size(); i++) {
      if (arr[i] < arr[small]) {
        small = i;
      }
    }
    /* exchange the smallest */
    int temp = arr[idx];
    arr[idx] = arr[small];
    arr[small] = temp;
    /* incremet the idx */
    idx++;
  }
}
