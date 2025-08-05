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
// the selection sort is like a card first we pick a key or the  current elemnt then go to the sorted part of arr and find the good place to place the value 
void selectionSort(int arr[],int n){
    //the first loop will go for the unsorted by default value
    for (int i = 1; i < n; i++) {
        int cur = arr[i];// this is the by default first unsorted part value 
        int pre = i - 1 ;// this the first value of the sorted part 
        while(pre>=0&&arr[pre]>cur){//this is the mean logic where we will shift the greater value to the right
            arr[pre+1] = arr[pre];// so if the arr is like this [4,1,] so it will shift the 4 to right --> [4,4,] 
            pre--;// and also if the j = 0 like [4,1] = [0,1] after the loop it will became [4,4]== j will become -1;
        }
        arr[pre+1] = cur;//that why we are using the pre+1 because the j will become from j=0 --> j=-1
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    return 0;
}