#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
int two_sum(vector<int>&arr,int tar,vector<int>& ans){
        for (int i = 0; i <=arr.size()-1; i++) {
        for (int j = i+1; j <= arr.size()-1; j++) {
            if (arr[i]+arr[j] == tar)
            {
                cout<<arr[i]<<" "<<arr[j]<<" ";
                ans[0] = i;
                ans[1] = j;
                return 1;
            }
        }
    
    }
    return -1;

}
void V1_Optimize_two_sum(vector<int>&arr,int tar){
        int i = 0;
        int j = 1;
        while(j<=(arr.size()-1)){
        if (arr[i] + arr[j] == tar)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            break;
        }
        else if(arr[i]+arr[j] !=tar){
            j++;
        }
        else{
            i++;
            j =i+1;
        }
    }
}
void V2_Optimize_two_sum(vector<int>&arr,int tar){
    int i =0;
    int j = arr.size()-1;
    sort(arr.begin(),arr.end());
    unsigned sum;
    while (i<j)
    {
        sum = arr[i] + arr[j];
        if(sum == tar){
            cout<<arr[i]<<arr[j]<<endl;
            break;
        }
        else if(sum>tar){
            j--;
        }
        else{
            i++;
        }
    }
    
}
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
void Missing_And_Duplicate_Value(vector<vector<int>>&arr){
    int n = arr.size();
    int expected_sum = (n*n *(n*n+1))/2;
    int actual_sum   = 0;
    set<int> s;
    int a,b;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            actual_sum += arr[i][j];
            if(s.find(arr[i][j])!=s.end()){
                a=arr[i][j];
            }
            s.insert(arr[i][j]);
        }
    }
    b = expected_sum + a - actual_sum; 
    cout<<a<<b;
}

int main() {
    // vector<vector<int>> arr = {{1,2,3},{4,9,6},{7,8,9}};
    // Missing_And_Duplicate_Value(arr);
    vector<int> arr = {1,2,3,4,3};
    unordered_map<int,int> s;
    int d;
    for (int i = 0; i < arr.size(); i++) {
        if(s.find(arr[i])!=s.end()){
            d = arr[i];
            break;
        }
        s.emplace(arr[i],i);
    }
    return 0;
}