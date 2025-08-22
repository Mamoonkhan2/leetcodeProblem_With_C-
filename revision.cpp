#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <cstring>      
using namespace std;

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
    // vector <int> arr = {1,2,3,4,1,2,3};
    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size(); i++) {
        //     int freq = 0;
        //     for (int J = 0; J < n; J++) {
            //         if(arr[i] == arr[J]){
                //             freq++;
                //         }
    //         else if(freq == 1|| (arr[i] != arr[i-1] && arr[i] != arr[i+1])){
    //             cout<<arr[i];
    //             break;
    //         }
    //         else{
    //             freq = 0;
    //         }
        
    //     }        
        
    //     }
    // for (int i = 1; i < arr.size(); i++) {
    //     if((arr[i] != arr[i-1])&&(arr[i] !=arr[i+1])){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    // FindForSingleNumber
    // vector <int> arr= {1,2,3,5,2,3,1};
    // int ans= 0;
    // for (int i = 0; i < arr.size(); i++) {
    //     ans^=arr[i];
    // }
    // cout<<ans;
    // SumOfDigit(111);
    // int count = 111;
    // int current = 0;
    // while (count!=0)
    // {
    //     current += count%10;
    //     count /=10;
        
    // }
    // cout<<current;
    // DecimalToBinary
    // int n = 5;
    // int ans = 0,pows = 1;
    // while(n!=0){
    //     int current = n%2;
    //     n /=2;
    //     ans += (current*pows);
    //     pows*=10;
    // }
    
    // // 101 binary to decimal
    // int anss = 0,powss= 1;
    // while(ans!=0){
    //     int LDigit = ans%10;
    //     ans/=10;
    //     anss+= LDigit*powss;
    //     powss*=2;
    // }
    // cout<<anss;
    // find that a value is power of 2 or not
    // int n = 5;
    // if(n&(n-1) == 0){
    //      cout<<"it is power of n";
    // }
    // else{
    //     cout<<"it is not power of 2";
    // }
    
    // pointers 
    // int a = 4;
    // int *p = &a;
    // int **pp = &p;
    // int *null = NULL;
    // cout<<null;
    // int a[5] = {1,2,3,4,5};
    // for (int i = 0; i < 5; (*a)++,i++) {
    //     cout<<*a;
    
    // }
     // exeptforindexproductofall
    // brute force apporach
    // vector <int> vec = {1,2,3,4};
    // int n = vec.size();
    // for (int i = 0; i < n; i++) {
    //     int f = 1;
    //     for (int j = 0; j < n; j++) {
    //         if(i!=j){
    //             // cout<<i<<endl;
    //             f *= vec[j] ;
    //         }
    //     }
    //     cout<<f;
    // }
    // optimize way
    // vector <int> arr = {1,2,3,4};
    // vector <int> ans(arr.size(),1);
    // int prefix = 1 ;
    // int suffix = 1 ;
    // for (int i = 1; i < arr.size(); i++) {
    //     prefix *= arr[i-1];
    //     ans[i] *= prefix;
    // }
    // for (int i = arr.size()-2; i >= 0; i--) {
    //     suffix *= arr[i+1];
    //     ans[i] *= suffix;
    // }
    
    // for (int i = 0; i < arr.size(); i++) {
        
    //     cout<<ans[i];
    // }
    // MaxWaterinthecontaner
    vector <int> height = {1,2,3,4,5};
    int maxwater = 0;
    for (int i = 0; i < height.size(); i++) {
        int w =0;
        int h =0;
        int area = 0;
        for (int j = i+1; j < height.size(); j++) {
            w = j-i;
            h = min(height[i],height[j]);
            area = w*h;
            maxwater= max(maxwater,area); 
        }
    
    }
    cout<<maxwater;
    return 0;
}
