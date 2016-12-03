#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
//1) 如果 * elem1 应该排在 * elem2 前面，则函数返回值是负整数（任何负整数都行）。
//2) 如果 * elem1 和* elem2 哪个排在前面都行，那么函数返回0
//3) 如果 * elem1 应该排在 * elem2 后面，则函数返回值是正整数（任何正整数都行）。

//按照升序排列
int ascending(const void *elem1, const void *elem2)
{
    const int *value1 = (const int *)elem1;
    const int *value2 = (const int *)elem2;
    if(*value1 > *value2) return 1;
    else return -1;
}
//按照降序排列
int dscending(const void *elem1, const void *elem2)
{
    const int *value1 = (const int *)elem1;
    const int *value2 = (const int *)elem2;
    if(*value1 < *value2) return -1;
    else return 1;
}
int main(int argc, char **argv)
{
    cout << "Input the total number:";
    int total;
    cin >> total;
    int *pArray = new int[sizeof(int) * total];
    for(int i = 0; i < total; i++)
        cin >> pArray[i];
    int (*typeOfSort)(const void *elem1, const void *elem2);
    
    if(strcmp(argv[1], "as"))
        typeOfSort = ascending;
    if(strcmp(argv[1], "ds"))
        typeOfSort = dscending;
        
    qsort(pArray, total, sizeof(int), typeOfSort);
    for(int i = 0; i < total; i++)
        cout << pArray[i] << " ";
        
    return 0;
}
