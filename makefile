all:
	g++ -Wall -o main main.cpp utils/printing.cpp utils/swaps.cpp sorts/insertionSorting.cpp sorts/selectionSorting.cpp sorts/quickSorting.cpp
	./main