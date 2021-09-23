#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void sort()//선택정렬
{
	for (int j = 0; j < SIZE - 1; j++) {
		for (int k = j + 1; k < SIZE; k++) {
			if (L[j]>L[k]) {
				swap(L[j], L[k]);
			}

		}
		
	}
	
				/* 입력 데이타는 L[]에 들어 있으면, 전체 원소 개수는 SIZE이다. */
	
}

void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}