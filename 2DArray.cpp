#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector <vector<int>> matrix = {
        {1,3,6,9},
        {12,15,18,21},
        {24,27,30,35},
    };
    int target = 27;
    int i = 0;
    int end = matrix.size();
    while (i>=0)
    {
        int mid = (i+end)/2;
        if(target>=matrix[mid][0]&&target<=matrix[mid][matrix.size()-1]){
            i = mid;
            break;
        }
        else if(target>matrix[i][matrix.size()-1]){
            i = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    int start = 0;
    int hoo   =     matrix[i].size();
    while(start<3){
        int mid = (start+hoo)/2;
        if(matrix[i][mid]==target){
            cout<<matrix[i][mid]<<endl;
            cout<<i<<" "<<mid;
            
            break;
        }
        else if(target>matrix[i][mid]){
            start = mid + 1;
        }
        else{
            hoo = mid - 1;
        }
    }
    return 0;
}