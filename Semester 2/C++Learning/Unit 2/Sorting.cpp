#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j<=0 && arr[j] > key){
            arr[j+ 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }    
}

void selectionSort(int arr[], int size){
    for (int i = 0; i < size -1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
           if(arr[j]<arr[min]){
            min = j;
           }
        }
        swap(arr[min], arr[i]);

    }
    
}

void merge(int arr[], int left, int mid, int right){
    int i,j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }

    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1+ i];
    }
    i = 0;
    j = 0;
    k = left;

    while(i<n1 and j < n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;

    }

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    
}

void MergeSort(int arr[], int left, int right){
    if(left< right){
        int mid = (left + right)/2;
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}



int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    //selectionSort(arr, size);
    MergeSort(arr, 0, size - 1);

    cout << "Sorted array:";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    int rand;
    cin >> rand;
    return 0;
}