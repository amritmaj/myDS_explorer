/*
* https://www.geeksforgeeks.org/array-rotation/
*
* .........a NAIVE implementation...........(below is O(n) implementation)
* 
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


/*
* A O(n) time implementation
*
*
* int main() {
* 	int arr[] = {1,2,3,4,5};
* 	int temp, rotation = 2, arr_size = sizeof(arr)/sizeof(arr[0]);
*
* 	int outplace_arr[ rotation ];
*
* 	for(int i=0; i<rotation; i++)
* 		outplace_arr[i] = arr[i];
* 	
* 	for(int j=0; j < arr_size; j++) {
* 		if( j <= (arr_size - rotation - 1) ) {
* 			arr[j] = arr[ j + rotation ];
* 		}
* 		else {
* 			arr[j] = outplace_arr[j - arr_size + (rotation + 1)];
* 		}
* 	}
* }
*
* if we are to rotate the array 'r' times, then take the first 'r' elements
* and put them in a separate array.
* Then in a single loop, shift the remaining elements of the former array
* forwards and put back the 'r' elements copied to the later array from the rear* into the former array.
*
*  arr = {1,2,3,4,5}
*
*  say r = 2
*
* copy first r elements to outplace_arr
* arr = {1,2,3,4,5}
* outplace_arr = {1,2}
*
* shift the remaining elements in arr forward
* arr = {3,4,5,_,_}
* outplace_arr = {1,2}
*
* replace the outplace_arr elements into arr from the rear
* arr = {3,4,5,1,2}
*
*/


