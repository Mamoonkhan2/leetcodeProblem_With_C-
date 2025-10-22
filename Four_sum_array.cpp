#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void four_sum_array(vector<int> &vec){
    sort(vec.begin(),vec.end());
    int n = vec.size();
    vector<vector<int>> ans;
    int tar =0;
    for (int a = 0; a < n; a++) {
        if(vec[a]==vec[a-1]) continue;;
        for (int b = a+1; b < n; b++) {
            int c = b + 1 ,d = n-1;
            while(b<n&&vec[b]==vec[b-1]) b++;
            while (c<d)
            {
                int sum = vec[a]+vec[b]+vec[c]+vec[d];
                if(sum==0){
                    ans.push_back({vec[a],vec[b],vec[c],vec[d]});
                    c++,d--;
                    while(c<d&&vec[c]==vec[c-1]) c++;
                }
                else if(sum<0){
                    c++;
                }
                else{
                    d--;
                }    
            }
            
        }   
    }    
    for(auto i: ans){
        for(auto j:i){
            cout<<j<<" ";
        }
    }
}
int main() {
    vector<int> vec = {1,1,2,2,-1,-1,-2};
    
    return 0;
}