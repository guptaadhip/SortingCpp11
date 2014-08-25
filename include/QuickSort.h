#include "SortImpl.h"

class QuickSort : public SortImpl{
 public:
  void Sort(std::vector<int>&) override;
 private: 
  int Partition(std::vector<int>& arr, int low, int high);
  void QSort(std::vector<int>& arr, int low, int high);
};
