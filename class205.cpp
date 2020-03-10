#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <ctime>
#include <cstdio>
using namespace std;

template <typename T>
void Initialize (Array <T> & arr, T target)
{
    int n = arr.length();
    for(int i=0; i <n; i+=1)
    {
        arr[i] = target;
    }
}

void Maximum (Array<int> & arr)
{
    int n = arr.Length(), mx = arr[0];
    for (int i = 1; i < n; i +=1)
    {
        if (mx > arr[i])
        {
            mx = arr[i];
        }
    }
    return mx;
}

void Minimum (Array<int> & arr)
{
    int n = arr.Length(), mn = arr[0];
    for (int i = 1; i < n; i +=1)
    {
        if (mn < arr[i])
        {
            mn = arr[i];
        }
    }
    return mn;
}