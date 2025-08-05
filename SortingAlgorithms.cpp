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
    //[3,2,1]
    for (int i = 0; i < n-1; i++) {
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
// the selection sort is like a card first we pick a key or the current  elemnt then go to the sorted part of arr and find the good place to place the value 

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
//dnf detch national flag algorithms three rule
/*
    vision is that first at the starting time the algorithm will have the value in unsorted manner
    low---mid---unsortedPart---high --> in starting the unsorted part is between mid---***--high then 
    the low increace and the also the mid and the high decrease 
    then it become like
    low---mid---high
    000---111---2222
*/
//0s from 0 to low
//1s from low to mid
//2s from high to n-1
void sort01s(vector &arr){//this is the brute force approach to find the 0s1s2s
    int zero =0,one = 0,two=0;
    for(int i :arr){
        if(i == 0) zero++;
        if(i==1)   one++;
        if(i==2)   two++;
    }
    for(int i =0;i<arr.size();i++){
        if(zero>0){
            arr[i]=0;
            zero--;
        }
        else if(one>0){
            arr[i]=1;
            one--;
        }
        else if(two>0){
            arr[i]=2;
            two--;
        }
    }
    for(int i :arr){
        cout<<i;
    }

}
//this is the detch national flag approach
void dnf();
int main() {
    vector <int> arr = {0,2,1,0,2,1,0,2,1};
    return 0;
}