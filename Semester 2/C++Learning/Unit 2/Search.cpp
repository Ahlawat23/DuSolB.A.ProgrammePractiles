#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }

    return -1;
    

};

int BinarySearch(int arr[], int size, int target){

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if ( arr[mid] < target){
            left = mid + 1;
        }
        else if ( arr[mid] > target){
            right = mid - 1;
        }
    }
    return -1;

};



int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = LinearSearch(arr, size, target);
    if (result == -1) {
    cout << "Element not found." << endl;
    } else {
    cout << "Element found at index:" << result << endl;
    }
    int rand;
    cin >> rand;
    return 0;
}
