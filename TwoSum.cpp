#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
// int two_sum(vector<int>&arr,int tar,vector<int>& ans){
//         for (int i = 0; i <=arr.size()-1; i++) {
//         for (int j = i+1; j <= arr.size()-1; j++) {
//             if (arr[i]+arr[j] == tar)
//             {
//                 cout<<arr[i]<<" "<<arr[j]<<" ";
//                 ans[0] = i;
//                 ans[1] = j;
//                 return 1;
//             }
//         }
    
//     }
//     return -1;

// }

// void V1_Optimize_two_sum(vector<int>&arr,int tar){
//         int i = 0;
//         int j = 1;
//         while(j<=(arr.size()-1)){
//         if (arr[i] + arr[j] == tar)
//         {
//             cout<<arr[i]<<" "<<arr[j]<<endl;
//             break;
//         }
//         else if(arr[i]+arr[j] !=tar){
//             j++;
//         }
//         else{
//             i++;
//             j =i+1;
//         }
//     }
// }
// void V2_Optimize_two_sum(vector<int>&arr,int tar){
//     int i =0;
//     int j = arr.size()-1;
//     sort(arr.begin(),arr.end());
//     unsigned sum;
//     while (i<j)
//     {
//         sum = arr[i] + arr[j];
//         if(sum == tar){
//             cout<<arr[i]<<arr[j]<<endl;
//             break;
//         }
//         else if(sum>tar){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
    
// }
pair<int,int> V3_Optimize_two_sum(vector<int>&arr,int tar){
    unordered_map<int,int> nu;
    pair<int,int> hh;
    for (int i = 0; i < arr.size(); i++) {
        int first = arr[i];
        int secound = tar-first;
        if(nu.find(secound)!=nu.end())
        {
           return {i,nu[secound]};
        }
        nu[first] = i;
    }

    
    
    return hh;
}
int main() {
    vector<int> arr = {2,4,3,7,5,1};
    pair<int,int> hh = V3_Optimize_two_sum(arr,9);
    cout<<arr[hh.first]+arr[hh.second];
    return 0;
}