#include <iostream>
#include <vector>
using namespace std;


int main() {
    /* (vector) -> is the stl template libray contaner use as the dynamic array so that we can change it size and capacity at run time
        (push_back) --> to add the value like pb(1) --> {1} pb(2) --> {1,2}
        (pop_back)  --> it will remove the last element of the vector also it will not effect the capacity only the size or remove only the value not the capacity of the vector
        (size)      --> is the value a vector fill now like {1,2,3,4} s = 4
        (capasity)  --> is the value we can fit in or how many we can fit in every time when the capacity become full and we add other value 
            {1,2} --> size = 2 capacity = 2 now we add pb(3) | {1,2,3} --> size = 3 capacity = 4 if it is full like {1,2,3,4} and now we add 
            pb(5) --> size = 5 capacity = 8 so every time the capacity become double or multiply with two 
        (at|[])     --> it is use to go on specific index on the vector like {1,2,3} --> arr.at(1) = 2 | arr[1] = 2
        (front)     --> will show the first value of the vector {11,22,33} => 11
        (back)      --> will show the last  value of the vector {11,22,33} => 33
        (vec(size,value)) --> like {vector <int> arr(size,value)} == so the size is that how many size/capacity  value = is that what value we will insert on each idx
            or like arr(2,2) --> {2,2} arr(4size,4the value to insert on each idx) --> {4,4,4,4}  4 S/4 C so the it will iterate the value in all the vector 
   
    
    
    





    */
  
    vector <int> arr(10,10);
    cout<<arr.capacity();
    cout<<arr.size();

//    cout<<arr.size()<<endl<<arr.capacity();
}