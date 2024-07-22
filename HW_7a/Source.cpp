// ============================================================
// Description: This program demonstrates a dynamic stack ADT.
// The program reads commands from a text file, outputs to the
// screen, and then writes results to an output file.
// The input.txt file is the input file to be used for this program.
// It contains commands that the program will read and then execute.
// The cout << statements are used to show the results of commands.
// These statements are not necessary, because the output can be
// viewed in the output file.
// ============================================================
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Stack.h"

int main()
{
    ifstream inFile; // file containing operations
    ofstream outFile; // file containing output
    string inFileName; // input file external name
    string outFileName; // output file external name
    string outputLabel;
    string command; // operation to be executed
    Stack stack;
    int item; // Declare item to hold values for push and pop
    int numCommands;

    // Prompt for file names, read file names, and prepare files
    cout << "Enter name of input file: ";
    cin >> inFileName;
    inFile.open(inFileName.c_str());
    cout << "Enter name of output file: ";
    cin >> outFileName;
    outFile.open(outFileName.c_str());
    cout << "Enter name of test run #: ";
    cin >> outputLabel;
    outFile << outputLabel << endl;

    // Read the first command from the input file
    inFile >> command;
    numCommands = 0;
    while (command != "quit")
    {
        if (command == "push")
        {
            inFile >> item;
            stack.push(item);
            // Output statement shows item pushed on stack
            cout << "\n" << item << " pushed on the stack - ";
        }
        else if (command == "pop")
        {
            stack.pop(item);
            // Output statement shows item popped off stack
            cout << "\n" << item << " popped off the stack - ";
        }
        else if (command == "top")
        {
            item = stack.returnTop();
            outFile << "Top element is " << item << endl;
            // Output statement shows the top item on the stack
            cout << "\n" << item << " is the top stack element - ";
        }
        else if (command == "isEmpty")
        {
            if (stack.isEmpty())
            {
                outFile << "Stack is empty." << endl;
                // Output statements state whether the stack is empty
                cout << "\nThe stack is empty - ";
            }
            else
            {
                outFile << "Stack is not empty." << endl;
                cout << "\nThe stack is not empty - ";
            }
        }
        else if (command == "isFull")
        {
            if (stack.isFull())
            {
                outFile << "Stack is full." << endl;
                // Output statements state whether the stack is full
                cout << "\nThe stack is full - ";
            }
            else
            {
                outFile << "Stack is not full." << endl;
                cout << "\nThe stack is not full - ";
            }
        }
        numCommands++;
        cout << " Command number " << numCommands << " completed."
             << endl;
        inFile >> command;
    }
    cout << "\nReceived \"quit\" command.\n\n"
         << "Testing completed.\n\n";
    inFile.close();
    outFile.close();
    return 0;
}
