#include "SortImpl.h"

class InsertionSort : public SortImpl{
 public:
  void Sort(std::vector<int>&) override;
 private:
  void Place(std::vector<int>& arr, int key);
}; 
