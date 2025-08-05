#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// now we are starting the Sorting algorithms
// the first one is buble sort algorithms
void bublesort(int arr[],int n){

    for (int i = 0; i < n; i++) {
        bool is_swap = false;
        for (int j = 0; j < n-i-1; j++) {
                if(arr[j] >= arr[j+1])
                {
                    is_swap = true;
                  swap(arr[j],arr[j+1]);
                }       
            }
            if(is_swap == false){
                break;
            }
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i];
    
    }
}
// insertion sort algorithms
// one part is sorted and other is unsorted
void insertionSort(int arr[],int n){

    for (int i = 0; i < n-1; i++) {
        cout<<i<<endl;
        int smalestidx =i;//unsorted part of array 
        for (int j = i+1; j < n; j++) {
            if(arr[j]<arr[smalestidx]){
                smalestidx = j;
            }
            swap(arr[i],arr[smalestidx]);
        }                
    }
    for (int i = 0; i < n; i++) {
        cout<<arr[i];
    
    }
}
int main() {
    int arr[] = {1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    return 0;
}