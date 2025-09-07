#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
bool compare(int freq1[],int freq2[])
{
    for (int i = 0; i < 26; i++) {
        if(freq2[i]!=freq1[i]){
            return false;
        }
    }
    return true;
}
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
    // string names = "$^%r&a##c&##!c&a#r*&(#)";
    // string part  = "##";
    // while (names.length()>0&&names.find(part)<names.length())
    // {
    //     int j = names.find(part);
    //     names.erase(j,part.length());
    // }
    // cout<<names;
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
    // find permutation in string 
    // string s1 = "ab";
    // string s2 = "ldknvjasabfasdf";
    // int arr[26] = {0};
    // for (int i = 0; i < s1.length(); i++) {
    //         arr[s1[i] - 'a']++;
    // }
    // int windowsize = s1.length();
    // for (int i = 0; i < s2.length(); i++) {
    //     int freqwindow[26] = {0};
    //     int idx = i;
    //     for (int j = 0; j < windowsize; j++) {
    //         freqwindow[s2[idx++]-'a']++;
    //     }
    //     if(compare(arr,freqwindow)){
    //         cout<<"true ";
    //         break;
    //     }
    //     else{
    //         cout<<i;
    //     }        
    // }
    // string words = "   this is   are  asdf arr   ";
    // string ans = "";
    // int n = words.size();
    // reverse(words.begin(),words.end());
    // for (int i = 0; i < words.length(); i++) {
    //     string rand ="";
    //     while(i<words.length() && words[i]!=' '){
    //         rand += words[i];
    //         i++;
    //     }
    //     if(rand.length() > 0){
    //         reverse(rand.begin(),rand.end());
    //         ans += " " + rand;
    //     }
    // }
    // ans.erase(ans.begin());
    // cout<<ans;
    // compress the vector array of char in order if there is one a so a if two so a2 etc
    // hello world
    vector <char> c = {'a','a','b','b'};
    int a = 1;
    for (int i = 1; i < c.size(); i++) {
       
        if(c[i-1]==c[i]){
            a++;       
        }
        else if(a!=0){
            c[i] = a;
        }
        else{
            a=0;
        }
        cout<<c[i];
    }asdfasdfasdf
    return 0;
}
