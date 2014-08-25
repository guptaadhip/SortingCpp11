#include "include/MergeSort.h"
#include <iostream>

using namespace std;

vector<int> MergeSort::Merge(vector<int>& left, vector<int>& right) {
  /* get the iterators */
  unsigned int idxRight = 0, idxLeft = 0;
  std::vector<int> result;

  while (idxRight < right.size() && idxLeft < left.size()) {
    if (right[idxRight] < left[idxLeft]) {
      result.push_back(right[idxRight]);
      idxRight++;
    } else {
      result.push_back(left[idxLeft]);
      idxLeft++;
    }
  }
  while (idxRight < right.size()) {
      result.push_back(right[idxRight]);
      idxRight++;
  }
  while (idxLeft < left.size()) {
      result.push_back(left[idxLeft]);
      idxLeft++;
  }
  return result;
}

void MergeSort::Sort(vector<int>& arr) {
  bool flag = false;
	if (arr.size() <= 0) {
		std::cout << "List is empty\n";
		return;
	} else if (arr.size() == 1) {
    return;
  }
  arr = MergeSorter(arr);
}

vector<int> MergeSort::MergeSorter(vector<int>& arr) {
  if (arr.size() == 1) {
    return arr;
  }
  /* Divide the list */
  std::vector<int>::iterator middle = arr.begin() + (arr.size() / 2);
  vector<int> left(arr.begin(), middle);
  vector<int> right(middle, arr.end());

  /* Sort the 2 lists */
  auto rLeft = MergeSorter(left);
  auto rRight = MergeSorter(right);

  /* Merge the list */
  return Merge(rLeft, rRight);
}
