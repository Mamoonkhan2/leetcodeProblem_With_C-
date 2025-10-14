#include <iostream>
#include <vector>
using namespace std;
int k = 0;
void topright(int stcol, int endcol, int strow, int endrow, const std::vector<std::vector<int>>& sss, int *arr)
{

    for (int i = stcol; i <= endcol; i++)
    {
        cout<<sss[strow][i];
        arr[k++] = sss[strow][i];
    }
    cout << endl;
    for (int i = strow + 1; i <= endrow; i++)
    {
        cout<<sss[i][endcol];
        arr[k++] = sss[i][endcol];
    }
    cout << endl;
}
void bottomleft(int stcol, int endcol, int strow, int endrow, const std::vector<std::vector<int>>& sss, int *arr)
{
    for (int i = endcol - 1; i >= stcol; i--)
    {
        cout<< sss[endrow][i];
        arr[k++] = sss[endrow][i];
    }
    cout << endl;
    for (int i = endrow - 1; i >= strow + 1; i--)
    {
        cout<<sss[i][stcol];
        arr[k++] = sss[i][stcol];
    }
    cout << endl;
}
int main()
{
    int arr[25] = {0};
    // vector <vector<int>> matrix = {
    //     {1,3,6,9},
    //     {12,15,18,21},
    //     {24,27,30,35},
    // };
    vector<vector<int>> sss = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};
    int strow = 0;
    int endrow = sss.size() - 1;
    int stcol = 0;
    int endcol = sss[0].size() - 1;
    topright(stcol, endcol, strow, endrow, sss, arr);
    bottomleft(stcol, endcol, strow, endrow, sss, arr);
    strow++;
    endrow--;
    stcol++;
    endcol--;
    topright(stcol, endcol, strow, endrow, sss, arr);
    bottomleft(stcol, endcol, strow, endrow, sss, arr);
    for (int i = 0; i < 26; i++) {
        cout<<arr[i]<<" ";    
    }
    // int target = 6;
    // int row = 0 ;
    // int col = 4;
    // while (row<sss.size()&&col>=0)
    // {
    //     if(target==sss[row][col]){
    //         cout<<sss[row][col];
    //         break;
    //     }
    //     else if (target > sss[row][col])
    //     {
    //         row+=1;
    //     }
    //     else{
    //         col-=1;
    //     }
    // }

    // while (strow<=endrow)
    // {
    //     int midr = (strow+endrow)/2;
    //     if(target>=matrix[strow][0]&&target<=matrix[strow][3]){
    //         int i = 0;
    //         int j = matrix[strow].size()-1;
    //         while (i<=j)
    //         {
    //             int midc = (i+j)/2;
    //             if(target == matrix[strow][midc]){
    //                 cout<<matrix[strow][midc];
    //                 cout<<endl<<strow<<" "<<midc<<endl;
    //                 break;
    //             }
    //             else if(target > matrix[strow][midc]){
    //                 i = midc+1;
    //             }
    //             else{
    //                 j = midc-1;
    //             }
    //         }
    //         break;

    //     }
    //     else if(target>matrix[strow][3]){
    //         strow = midr+1;
    //     }
    //     else{
    //         endrow = midr-1;
    //     }
    // }

    return 0;
}