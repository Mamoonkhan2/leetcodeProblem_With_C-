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
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         cout << "enter the value ";
    //         cin >> matrix[row][col];
    //     }
    // }
    int col = 2;
    // int row = 2;
    // while(col>=0){
    //     cout<<matrix[row][col];
    //     row+=1;
    //     col+=1;
    // }
    // 00 02
    // 11 11
    // 22 20
    // int matrix[3][3] ={ {1,2,3}
    //                   , {4,5,6},
    //                     {7,8,9}};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[col][col] << " | " << matrix[col][2 - col];
            cout << endl;
        }
        break;
    }

    return 0;
}