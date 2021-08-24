#include "headers.h"
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream in;
    int arr[MAXSIZE];
    getArray(in, FILENAME, arr, MAXSIZE);
    
    for(auto i:arr)
        cout<<i<<endl;
}