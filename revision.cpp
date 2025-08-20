#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstring>      
using namespace std;
int n = 5;
int x=0;
string name = "hello";
char names[12] = "hello world";
int arr[5] = {1,2,3,4,5};
int arrs = sizeof(arr) / sizeof(arr[0]);
bool exist(int arr[],int n,int value);

int main() {
    /*
        ||||||||||||||||||||||||||||2||0||2||5||||T||U||E|||A||U||G||||||||||||||||||||||||||||||||||||||||||||||
        |||||||*FAZI*||||||||||M|||||A|||||M|||||O||||O|||N||||||R||E||V||I||S||I|||O||N|||||||||||||||||||||||||       
        |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
    */                              
    // find in a prime
    // int n;
    // cout << "enter the n : ";
    // cin >> n;
    // for (int i = 2; i < sqrt(n); i++) {
    //     if (n % i == 0) {
    //         cout << "it is not a prime number" << endl;
    //         return 0;
    //     }
    // }
    // cout << "it is a prime number" << endl;
    // finding the intersection of the two arrays
    // int a[] = {1, 2, 3, 4, 5};
    // int b[] = {3, 4, 5, 6, 7};
    // int as = sizeof(a) / sizeof(a[0]);
    // int bs = sizeof(b) / sizeof(b[0]);
    // for (int i = 0; i < as; i++) {
    //     for (int j = 0; j < bs; j++) {
    //         if(exist(b,bs,a[i])){
    //             cout<<"intersection from perspective of a : "<<i<<endl;
    //             break;
    //         }
    //     }
        
    // }
    // for (int i = 0; i < arrs; i++) {
    //     if(arr[i] == n){
    //         cout<<"find the value is on indx : "<<i;
    //     }
    // }
    // FindTheUniqueofArry
    
    return 0;
}
bool exist(int arr[],int n,int value)
{
    for (int i = 0; i <n; i++)
    {
        /* code */
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
    
}
