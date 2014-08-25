#include "include/SortImpl.h" 
#include "include/Sorter.h"
#include <utility>
#include <vector>
#include <string>

Sorter::Sorter(std::unique_ptr<SortImpl>& sort)
  : _sort(std::move(sort)) {
}

void Sorter::Sort(std::vector<int>& arr) {
  _sort->Sort(arr);
}
