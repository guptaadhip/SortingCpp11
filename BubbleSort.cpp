#include "include/BubbleSort.h"
#include <iostream>

using namespace std;

void BubbleSort::Sort(vector<int>& arr) {
  bool flag = false;
	if (arr.size() <= 0) {
		std::cout << "List is empty\n";
		return;
	}
	for (int i = 0; i < arr.size(); i++) {
    flag = false;
    for (int j = 0; j < arr.size(); j++) {
      if (arr[j] > arr[j+1]) {
        flag = true;
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp; 
      }
    }
    if (flag == false) {
      return;
    }
	}
}
