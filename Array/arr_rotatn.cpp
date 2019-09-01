/*
* https://www.geeksforgeeks.org/array-rotation/
*
* .........a NAIVE implementation...........
*/

#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5};
	int temp, rotation=2, arr_size = sizeof(arr)/sizeof(arr[0]);
	
	cout<< "Given Array: ";
	for(int i=0; i<arr_size; i++) cout<< arr[i];
	cout<< "\n";

	for(int j=1; j<=rotation; j++) {
		temp = arr[0];
		for(int i=0; i<arr_size; i++) {
			arr[i-1] = arr[i];
		}
		
		arr[ arr_size - 1 ] = temp;
	}
	
	for(int i=0; i<arr_size; i++)
		cout << arr[i];
	cout << "\n";
}
