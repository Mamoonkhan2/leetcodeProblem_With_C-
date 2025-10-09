#include <iostream>
#include <vector>
#include <array>

using namespace std;
pair<int, int> linear(int matrix[][6], int key)
{
    pair<int, int> h;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (matrix[row][col] == 5)
            {
            }
        }
    }
    return h = {1, 1};
}
void sum(int matrix[][3])
{
    int maxe = -666;
    for (int row = 0; row < 3; row++)
    {

        int h = 0;
        for (int col = 0; col < 3; col++)
        {
            h += matrix[col][row];
            maxe = max(maxe, h);
        }
        cout << maxe << endl;
    }
}
int main()
{
    // int matrix[4][4] = {
    //     {1,  2,  3,  4  },
    //     {5,  6,  7,  8  },
    //     {9,  10, 11, 12 },
    //     {13, 14, 15, 16 }
    // };
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << "enter the value ";
    //         cin >> matrix[row][col];
    //     }
    // }
    // int row = 2;
    // while(col>=0){
    //     cout<<matrix[row][col];
    //     row+=1;
    //     col+=1;
    // }
    // 00 02
    // 11 11
    // 22 20
    vector <vector<int>> matrix[3][3] ={ {1,2,3}
                                        ,{4,5,6},
                                         {7,8,9}};
    int sums=0;
    //     int matrix[4][4] = {
        // {1,  2,  3,  4  },
    //     {5,  6,  7,  8  },
    //     {9,  10, 11, 12 },
    //     {13, 14, 15, 16 }
    // };
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         if(i==j){
    //             sums+=matrix[i][j];
    //         }
    //         else if(j==4-i-1){
    //             sums+=matrix[i][j];
    //         }
    //     }
    // }
    for (int i = 0; i < 3; i++) {
        sums += matrix[i][i];
        if(i!=3-i-1){
            sums+=matrix[i][3-i-1];
        }
    
    }
    cout<<sums;
    return 0;
}