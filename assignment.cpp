// File: assignment
// Created by Tyler Sandoval on 10/10/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
class Counter
{
private:
    unsigned int count;         // count

public:
    Counter(): count(0)         // constructor w/ no args
    {};
    Counter(int c): count(c)   // constructor with one arg
    {};
    unsigned int get_count()    // returns count
    {
        return count;
    }
    /* The operator keyword is used to overload
     * the operator in hand*/
    Counter operator ++()          // increment prefix
    {
        ++count;
        //Counter temp;          // create temporary class object
        //temp.count = count;    // increment the count of the temp object
        //return temp;           // return the temp object, with now incremented count
        return Counter(count);
    }

};

// Prototypes

// Main Program Program
int main(void)
{
    Counter c1, c2, c3;
    cout << "c1 = " << c1.get_count() << endl;
    cout << "c2 = " << c2.get_count() << endl;
    ++c1;
    ++c2;
    cout << "c1 = " << c1.get_count() << endl;
    cout << "c2 = " << c2.get_count() << endl;

    c3 = ++c1;
    cout << "c3 = " << c3.get_count() << endl;

    return 0;
}
// Function Definitions