// TOPIC: std::array

// Syntax: std::arrat<T, N> array;

// NOTICE:
// 1. std::array is a container that encapsulates fixed size arrays.
// 2. array size is needed at compile time.
// 3. Assign by value is actually by value.
// 4. Access Elements:
//    a. at()
//    b. []
//    c. front()
//    d. back()
//    e. data() // gives access to the underlying array


#include<iostream>
#include<array>

using namespace std;

int main(){

    // Declare
    array<int, 5> myarray;

    // Initialization
    array<int, 5> myarray = {1,2,3,4,5}; // initializer list
    array<int, 5> myarray2 {1,2,3,4,5}; // uniform initialization

    // Assign using initialization list
    array<int, 5> myarray;
    myarray = {1,2,3,4,5};


    return 0;
}