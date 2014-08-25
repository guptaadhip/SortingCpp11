#include <memory>

class SortImpl;

class Sorter {
 public:
  Sorter (std::unique_ptr<SortImpl>& sort);
  void Sort(std::vector<int>&);
 private:
  std::unique_ptr<SortImpl> _sort;
};
