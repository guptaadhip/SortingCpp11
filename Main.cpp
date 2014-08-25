#include "include/SortImpl.h"
#include "include/BubbleSort.h"
#include "include/QuickSort.h"
#include "include/SelectionSort.h"
#include "include/InsertionSort.h"
#include "include/MergeSort.h"
#include "include/Sorter.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int opt;
  do {
  cout << "Select a sorting type:\n 1. Quick\n 2. Merge\n" \
              " 3. Selection\n 4. Bubble\n 5. Insertion\n";
  cout << "Choice (1 - 5): ";
  cin >> opt;
  } while (opt < 0 && opt > 5);
  unique_ptr<SortImpl> sortImpl;
  switch (opt) {
    case 1:
      sortImpl = move(unique_ptr<SortImpl>(new QuickSort()));
      break;
    case 2:
      sortImpl = move(unique_ptr<SortImpl>(new MergeSort()));
      break;
    case 3:
      sortImpl = move(unique_ptr<SortImpl>(new SelectionSort()));
      break;
    case 4:
      sortImpl = move(unique_ptr<SortImpl>(new BubbleSort()));
      break;
    case 5:
      sortImpl = move(unique_ptr<SortImpl>(new InsertionSort()));
      break;
    default:
      return -1;
  }
  Sorter *sort = new Sorter(sortImpl);
	vector<int> list;
	for (int i = 0; i < 5; i++) {
		list.push_back(rand());
	}
  cout << endl;
  cout << "Unsorted Array: " << endl;
  for (int element : list) {
    cout << "\t" << element << endl;
  }
  cout << endl;
	sort->Sort(list);
  cout << "Sorted Array: " << endl;
  for (int element : list) {
    cout << "\t" << element << endl;
  }
  cout << endl << endl;
  return 0;
}

