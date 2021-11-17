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
    int i=0;
    int shoesize;

    ofstream outfile;
    outfile.open("shoes.txt", ios::app);

    for (i = 0; i < 5; i++) {
        cout << "\n shoe number: " << i + 1 << endl;
        cout << " shoe size: us";
        cin >> ptr[i].size;
        cout << " shoe price: $";
        cin >> ptr[i].price;
        cout << " shoe color: ";
        cin >> ptr[i].color;

        outfile << ptr[i].size << endl;
        outfile << ptr[i].price << endl;
        outfile << ptr[i].color << endl;
    }
    
    outfile.close();

    ifstream infile;
    infile.open("shoes.txt");

    cout << "What size shoe are you looking for? ";
    cin >> shoesize;

    for (i = 0; i < 5; i++) {
        infile >> ptr[i].size;
        infile >> ptr[i].price;
        infile >> ptr[i].color;
        while (shoesize == ptr[i].size) {
            cout << "\nSize: " << ptr[i].size;
            cout << "\nPrice: " << ptr[i].price;
            cout << "\nColor: " << ptr[i].color;
        }
    }
    infile.close();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
