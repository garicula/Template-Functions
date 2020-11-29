// Garrick Morley
// CPSC 300 Project 5
// This program implements template functions

#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath>
#include <fstream>
#include <cassert>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#include <string>

using namespace std;

//template function to print the list
template <class Item1>
void print_list(Item1 list[], int n)	//leave the second input as a set variable since the capacity of the array will always be an int
{										//Make the first variable (array) able to be any value type
	int i;
    for (i = 0; i < n; i++)
    	cout << list[i] << endl;
}

//template function to sort the list
template <class Item1>
void sort(Item1 list[], int n)
{
	int i;
	int j;
	Item1 tmp;			//declare this variable with "Item1" so the array in the function matches the input

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (list[i] > list[j])
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
}

//main function to test out the template functions
int main()
{
	//functions that worked before the template change (uses int)
    int list_i[] =
        {12, 34, 2, 99, 10, 8};
    int list_i_size = sizeof(list_i) / sizeof(list_i[0]);

    string list_s[] =
        {"Superior", "Huron", "Michigan", "Erie", "Ontario"};
    int list_s_size = sizeof(list_s) / sizeof(list_s[0]);

    double list_r[] =
        {3.14159, 22222, 0.0001, -1234.5, 678.9, 99.0, 88.0, 77.0, 1010.1};
    int list_r_size = sizeof(list_r) / sizeof(list_r[0]);

	//template functions working on INT variables
    cout << "Integer list before sort ...\n";
    print_list (list_i, list_i_size);
    cout << endl;
    sort (list_i, list_i_size);
    cout << "Integer list after sort ...\n";
    print_list (list_i, list_i_size);
    cout << endl;

    //template functions working on STRING variables
    cout << "String list before sort ...\n";
    print_list (list_s, list_s_size);
    cout << endl;
    sort (list_s, list_s_size);
    cout << "String list after sort ...\n";
    print_list (list_s, list_s_size);
    cout << endl;

	//template functions working on DOUBLE variables
    cout << "Real number list before sort ...\n";
    print_list (list_r, list_r_size);
    cout << endl;
    sort (list_r, list_r_size);
    cout << "Real number list after sort ...\n";
    print_list (list_r, list_r_size);
    cout << endl;

    return 0;
}













