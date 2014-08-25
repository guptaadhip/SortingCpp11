#include "include/QuickSort.h"
#include <iostream>

using namespace std;

void QuickSort::Sort(vector<int>& arr) {
	if (arr.size() <= 0) {
		std::cout << "List is empty\n";
		return;
	}
  QSort(arr, 0, arr.size() - 1);
}

void QuickSort::QSort(vector<int>& arr, int low, int high) {
  if (low < high) {
    int part = Partition(arr, low, high);
    if (part == -1)
      return;
    QSort (arr, low, part - 1);
    QSort (arr, part + 1, high);
  }
}

int QuickSort::Partition(vector<int>& arr, int first, int last) {
  /* Get the pivot value */
  int pivot = first;
  int up = first;
  int down = last;
  while (up < down) {
    /* move the first pointer to a value greater than pivot */
    while (arr[up] <= arr[pivot]) {
      up++;
    }
    /* Move the last pointer to a value less than pivot */
    while (arr[down] > arr[pivot]) {
      down--;
    }
    /* if the up and down have moved exchange and continue */
    if (up < down) {
      int temp = arr[up];
      arr[up] = arr[down];
      arr[down] = temp;
      continue;
    } else {
      int temp = arr[pivot];
      arr[pivot] = arr[down];
      arr[down] = temp;
    }
    return down;
  }
}

