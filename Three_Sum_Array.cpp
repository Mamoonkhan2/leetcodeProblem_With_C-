#include <iostream>
#include <vector>
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

int main()
{
    vector<int> arr = {1, 0, -1, 2, -1};
    int n = arr.size();

    return 0;
}