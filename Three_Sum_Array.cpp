#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void V1_Three_Sum_Array(vector<int> &arr)
{
    int n = arr.size();
    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            for (int c = b + 1; c < n; c++)
            {
                if (arr[a] + arr[b] + arr[c] == 0)
                {
                    cout << arr[a] << " " << arr[b] << " " << arr[c] << endl;
                    break;
                }
            }
        }
    }
}
void V2_Three_Sum_Array(vector<int> &arr, int tar)
{
    int n = arr.size();
    vector<int> ans;
    set<vector<int>> s;
    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            for (int c = b + 1; c < n; c++)
            {
                if (arr[a] + arr[b] + arr[c] == 0)
                {
                    vector<int> triple = {arr[a], arr[b], arr[c]};
                    sort(triple.begin(), triple.end());
                    if (s.find(triple) == s.end())
                    {
                        s.insert(triple);
                        ans.insert(ans.end(), triple.begin(), triple.end());
                    }
                }
            }
        }
    }
    for (int i : ans)
    {
        cout << i << " ";
    }
}
void V3_Three_Sum_Array(vector<int> &arr)
{
    int n = arr.size();
    set<vector<int>> triplet;
    for (int i = 0; i < n; i++)
    {
        set<int> check;
        int a = -arr[i];
        for (int b = i + 1; b < n; b++)
        {
            int c = a - arr[b];
            if (check.find(c) != check.end())
            {
                vector<int> temp = {arr[i], arr[b], c};
                sort(temp.begin(), temp.end());
                triplet.insert(temp);
            }
            check.insert(arr[b]);
        }
    }
    cout << endl;
    for(auto eset :triplet){
        for(auto ees_set:eset){
            cout<<ees_set<<" ";
        }
    }
    cout<<endl;
}
void V4_Three_Sum_Array(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    set<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        int j = i+1,k = n-1;
        if(arr[i]==arr[i-1]) continue;
        while (j<k)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if (sum == 0)
            {
                vector<int> triplet = {arr[i],arr[j],arr[k]};
                sort(triplet.begin(),triplet.end());
                ans.insert(triplet);
                k--;j++;
                while(j<k&&arr[j]==arr[j-1]) j++;
            }
            else if(sum<0){
                j++;
            }
            else{
                k--;
            }
            
        }
    }
    for(auto f:ans){
        for(auto s:f){
            cout<<s<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    int arr[10] = {1,2,3,4,5,6,7,8,9}
    return 0;
}