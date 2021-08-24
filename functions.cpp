#include "headers.h"
// Define your FOUR functions here (no more, no less):
// First, the 3 functions for the selectionSort:
// swap_values, find_index_of_swap, sort

void swap_values(int& v1, int& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
void sort(bool descending, int array[], int size, int starting_index)
{
    if (starting_index == size-1)
    {
        return;
    }
    int index_of_swap = find_index_of_swap(descending, array, size, starting_index);
    swap_values(array[index_of_swap], array[starting_index]);
    sort(descending, array, size, starting_index+1);
}
int find_index_of_swap(bool descending, int array[], int size, int starting_index)
{
    int min = array[starting_index];
    int index_of_min = starting_index;

    for(int index = starting_index + 1; index < size; index++){
        if ((array[index] <= min)^descending){
            min = array[index];
            index_of_min = index;
        }
    }
    return index_of_min;
}

// Next, define the function getArray here. 
// This is the same one we used in Lab 4, so you can copy it over as is.

void getArray(std::ifstream& in, std::string filename, int array[], int size)
{
    in.open(filename, std::ios::in);
    int temp, counter = 0;
    do{
        in>>temp;
        array[counter] = temp;
        counter++;
    } while (!in.eof() && counter < size);

}