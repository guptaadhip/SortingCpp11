#include "SortImpl.h"

class MergeSort : public SortImpl {
 public:
  void Sort(std::vector<int>&) override;
 private:
  std::vector<int> MergeSorter(std::vector<int>&);
  std::vector<int> Merge(std::vector<int>&, std::vector<int>&);
}; 
