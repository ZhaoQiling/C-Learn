#include <iostream>
#include <algorithm>
using namespace std;
bool cmpDs(int a, int b)
{
    return b < a;
}
int main()
{
    int arr[] = {7, 5, 77, 3, 2, 1};
    int lenArr = sizeof(arr) / sizeof(int);
    sort(arr, arr + lenArr);
    while(next_permutation(arr, arr + lenArr))
    {
        for(int i = 0; i < lenArr; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    cout << "\t---sort by ds---" << endl;
    sort(arr, arr + lenArr, cmpDs);
    while(prev_permutation(arr, arr + lenArr))
    {
        for(int i = 0; i < lenArr; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
