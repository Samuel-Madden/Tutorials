// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> nums;
    for (int i = 0; i < size; i++) {
        int number;
        cin >> number;
        nums.push_back(number);
    }

    cout << "The numbers you entered were: ";
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
}
