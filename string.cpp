#include <iostream>
#include <vector>
using namespace std;


int main() {
    char string[100] = "Hello, World!";
    char arr[] = {
        'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'
    };
    for(int i = 0; arr[i] != '\0'; i++) {
        cout<<arr[i];
    }
    return 0;
}