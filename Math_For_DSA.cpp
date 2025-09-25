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
    int n = 100;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j*j <= i; j++) { // it will check if the i is prime or not if it is then it will give us the result 
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    
    }
    string version1 = "1.3";
    string version2 = "1.10";
    float vf = stof(version1);
    cout<<vf;
    return 0;
}