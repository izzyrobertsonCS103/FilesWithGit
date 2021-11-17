// FilesWithGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Shoe {
    int size;
    double price;
    string color;
};

int main()
{
    Shoe s[5];
    Shoe *ptr;
    ptr = s;
    int i;

    ofstream outfile;
    outfile.open("shoes.txt", ios::app);

    for (i = 0; i < 2; i++) {
        cout << "\n Shoe Number: " << i + 1 << endl;
        cout << " Shoe size: US";
        cin >> ptr[i].size;
        cout << " Shoe price: $";
        cin >> ptr[i].price;
        cout << " Shoe color: ";
        cin >> ptr[i].color;

        outfile << ptr[i].size << endl;
        outfile << ptr[i].price << endl;
        outfile << ptr[i].color << endl;
    }
    outfile.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
