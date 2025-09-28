#include <iostream>
#include <vector>
#include <math.h>
#include <stdexcept> 
using namespace std;

int main()
{
    // finding the prime number using square root like 
    // 16 / 1
    // 16 / 2
    // 16 / 3
    // 16 / 4
    // sieve of erastanes 
    // int n = 103;
    // vector <int> isPrime(n+1,true);// it will go from {0,1,2--n}; also all the value will be true 
    // for (int i = 2; i <= n; i++) {// it will go through all the loop
    //     if(isPrime[i])// mean it will check if the value is true so then we have to remove it multiple for 2 => 4,6,8,10 ----
    //     {
    //         for (int j = i*2; j <= n; j=j+i) {//int j = i*2 will become 4 then it will only update the conditional statemant like j=j+1 4+2=6
    //             isPrime[j] = false; // it will false the value like 4 will become false
    //         }
    //     }
    //     if(isPrime[i]){ // it will show like 2 is true so print it
    //         cout<<i<<" ";
    //     } 
    // }
    // for (int i = 2; i <= n; i++) {

    //    bool isPrime = true;
    //    for (int j = 2; j*j <= i; j++){
    //         if(i%j==0){
    //                     isPrime = false;

    //                             break;
    //         }
    //    } 
        // for (int j = i  ; j*j <= i ; j++) {
        //     if( == 0){
        //     }
        
        // }
        // if(isPrime)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    // string version1 = "1.3";
    // string version2 = "1.10";
    // float vf = stof(version1);
    // cout<<vf;
    // armstrom law
    // int n = 153;
    // int coudt = 0;
    // while (n!=0)
    // {
    //     int ns =  n%10;
    //     coudt+= (ns*ns*ns);
    //     n/= 10;
    // }
    // cout<<coud;
    return 0;
}