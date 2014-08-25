all: InsertionSort.cpp QuickSort.cpp BubbleSort.cpp MergeSort.cpp SelectionSort.cpp Sorter.cpp Main.cpp
	g++ -o Sort InsertionSort.cpp QuickSort.cpp BubbleSort.cpp MergeSort.cpp SelectionSort.cpp Sorter.cpp Main.cpp -std=c++11

clean:
	rm -r Sort
