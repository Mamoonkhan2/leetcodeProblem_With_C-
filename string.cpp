#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;

bool hhhh(char c){
    if((c>=97)&&(c<=122))
    {
        return true;
    }
    return false;
}

bool hhhh(int c){
    if((c>=0)&&(c<=9))
    {
        return true;
    }
    return false;
}
int main() {
    string names = "$^%r&a##c&##!c&a#r*&(#)";
    string part  = "##";
    while (names.length()>0&&names.find(part)<names.length())
    {
        int j = names.find(part);
        names.erase(j,part.length());
    }
    cout<<names;
    // int i = 0;
    // int j = names.length()-1;
    // bool yes = false;
    // while (i<j)
    // {
    //     if(!hhhh(names[i])){
    //         i++;
    //         continue;
    //     }
    //     else if(!hhhh(names[j])){
    //         j--;
    //         continue;
    //     }
    //     else if(names[i]==names[j]&&hhhh(names[i])&&hhhh(names[j]))
    //     {
    //         yes = true;
    //         i++;
    //         j--;
    //     }
    //     else{
    //         yes = false;
    //     }
    // }
    // if(yes){
    //     cout<<"palendrom";
    // }
    // else{
    //     cout<<"not palendrom";
    // }
    return 0;
}
