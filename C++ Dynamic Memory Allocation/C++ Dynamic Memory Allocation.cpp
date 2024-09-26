// C++ Dynamic Memory Allocation
//

#include <iostream>
using namespace std;

int main()
{
    //Exersize 1: Write a C++ program to dynamically allocate an integer, a character and a string and assign a value to them.
    //Int char and string
    string* iThinkThisStringIsOnTheHeap = new string;
    *iThinkThisStringIsOnTheHeap = "Apple";

    int *iThinkThisIntIsOnTheHeap = new int;
    *iThinkThisIntIsOnTheHeap = 3;

    char *iThinkThisCharIsOnTheHeap = new char;
    *iThinkThisCharIsOnTheHeap = 'A';


    cout << "Exercise 1: Use Heap to Store a Char, Int and String" << endl;
    cout << "This is the String on the heap: " << *iThinkThisStringIsOnTheHeap << endl;
    cout << "This is the Int on the heap: " << *iThinkThisIntIsOnTheHeap << endl;
    cout << "This is the Char on the heap: " << *iThinkThisCharIsOnTheHeap << endl;
    delete iThinkThisStringIsOnTheHeap;
    delete iThinkThisIntIsOnTheHeap;
    delete iThinkThisCharIsOnTheHeap;

    
//Exercise 2:  Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements.

    string* stringArray = new string[2];
    stringArray[0] = "Hello1";
    stringArray[1] = "Hello2";
    cout << stringArray[0] << endl;
    cout << stringArray[1] << endl;
    delete[] stringArray;

    //Exersize 3: Write a C++ program to dynamically allocate two two-dimensional arrays of floating values and strings. Initialize its elements.



    
}

